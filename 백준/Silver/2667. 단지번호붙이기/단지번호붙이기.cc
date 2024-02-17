#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int a[29][29];
int visited[29][29];
int y, x, ny, nx;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<int> ret;
int dfs_cc(int y, int x) {
	int sum = 1;
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n)
			continue;
		if (visited[ny][nx] || !a[ny][nx]) continue;
		sum += dfs_cc(ny, nx);
	}
	return sum;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			a[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] || !a[i][j]) continue;
			ret.push_back(dfs_cc(i, j));
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << '\n';
	for (int each : ret) {
		cout << each << '\n';
	}
	return 0;
}