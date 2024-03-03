#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[254][254];
int visited[254][254];
const int dy[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
const int dx[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
int ret, ny, nx;
void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= m || nx >= n)
			continue;
		if (visited[ny][nx] || !a[ny][nx]) continue;
		dfs(ny, nx);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] || !a[i][j]) continue;
			dfs(i, j);
			ret++;
		}
	}
	cout << ret << '\n';
	return 0;
}
/*!SECTION
CC
DFS
8 direction
*/