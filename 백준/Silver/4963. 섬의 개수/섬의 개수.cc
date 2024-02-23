#include <bits/stdc++.h>
using namespace std;
int w, h, ny, nx;
int ret;
int a[54][54];
int visited[54][54];
const int dy[8] = {-1, -1, 1, 0, -1, 1, 1, 0};
const int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
void clear() {
	fill(&a[0][0], &a[h][w], 0);
	fill(&visited[0][0], &visited[h][w], 0);
	ret = ny = nx = w = h = 0;
}
void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= h || nx >= w)
			continue;
		if (visited[ny][nx] || !a[ny][nx]) continue;
		dfs(ny, nx);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> w >> h;
		if (!w && !h) break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (visited[i][j] || !a[i][j]) continue;
				dfs(i, j);
				ret++;
			}
		}
		cout << ret << '\n';
		clear();
	}
	return 0;
}
/*!SECTION
CC, DFS
8 direction (consider diagonals)
*/