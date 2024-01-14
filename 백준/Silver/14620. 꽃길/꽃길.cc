#include <bits/stdc++.h>
using namespace std;
int n;
int a[14][14];
int visited[14][14];
int ret_min = INT_MAX;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
bool check(int y, int x) {
	if (visited[y][x])
		return false;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n)
			return false;
		if (visited[ny][nx])
			return false;
	}
	return true;
}
void go(int y, int x, int cnt, int sum) {
	if (cnt >= 3) {
		ret_min = min(sum, ret_min);
		return ;
	}
	for (int i = y; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == y && j <= x) continue ;
			if (!check(i, j)) continue ;
			visited[i][j] = 1;
			visited[i - 1][j] = 1;
			visited[i][j - 1] = 1;
			visited[i + 1][j] = 1;
			visited[i][j + 1] = 1;
			go(i, j, cnt + 1, 
				sum + a[i][j]
					+ a[i - 1][j]
					+ a[i][j - 1]
					+ a[i + 1][j]
					+ a[i][j + 1]);
			visited[i][j] = 0;
			visited[i - 1][j] = 0;
			visited[i][j - 1] = 0;
			visited[i + 1][j] = 0;
			visited[i][j + 1] = 0;
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	go(0, 0, 0, 0);
	cout << ret_min << '\n';
	return 0;
}