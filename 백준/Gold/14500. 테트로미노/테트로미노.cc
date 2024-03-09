#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[504][504];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int ny, nx, ret = INT_MIN;
void dfs(int y, int x, int prev_y, int prev_x, int depth, int sum) {
	if (depth >= 4) {
		ret = max(ret, sum);
		return ;
	}
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;
		if (ny == prev_y && nx == prev_x) continue;
		dfs(ny, nx, y, x, depth + 1, sum + a[ny][nx]);
	}
}
void fourT(int y, int x) {
	if (y - 1 >= 0 && x + 1 < m && x - 1 >= 0) // up
		ret = max(ret, a[y-1][x] + a[y][x+1] + a[y][x] + a[y][x-1]);
	if (y - 1 >= 0 && x + 1 < m && y + 1 < n) // right
		ret = max(ret, a[y-1][x] + a[y][x+1] + a[y][x] + a[y+1][x]);
	if (y + 1 < n && x + 1 < m && x - 1 >= 0) // down
		ret = max(ret, a[y][x+1] + a[y][x] + a[y][x-1] + a[y+1][x]);
	if (y - 1 >= 0 && x - 1 >= 0 && y + 1 < n) // left
		ret = max(ret, a[y-1][x] + a[y][x-1] + a[y][x] + a[y+1][x]);
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
			dfs(i, j, -1, -1, 1, a[i][j]);
			fourT(i, j);
		}
	}
	cout << ret << '\n';
	return 0;
}
/*!SECTION

DFS
+4T logic

*/