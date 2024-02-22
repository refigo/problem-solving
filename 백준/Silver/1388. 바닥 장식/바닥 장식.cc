#include <bits/stdc++.h>
using namespace std;
int n, m, ny, nx, ret;
char a[54][54];
int visited[54][54];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;
		if (visited[ny][nx]) continue;
		if (a[y][x] == '-') {
			if ((nx == x - 1 || nx == x + 1) && (a[ny][nx] == '-')) {
				dfs(ny, nx);
			}
		} else {
			if ((ny == y - 1 || ny == y + 1) && (a[ny][nx] == '|')) {
				dfs(ny, nx);
			}
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j]) continue;
			dfs(i, j);
			ret++;
		}
	}
	cout << ret << '\n';
	return 0;
}