#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[104][74];
int visited[104][74];
const int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int ret, ny, nx;
int dfs(int y, int x, int h, int check) {
	int tmp = 0;
	visited[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;
		if (a[ny][nx] == h && !visited[ny][nx]) {
			tmp = dfs(ny, nx, h, check);
			if (check) {
				check = tmp;
			}
		}
		if (a[ny][nx] > h) {
			check = 0;
		}
	}
	return check;
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
			ret += dfs(i, j, a[i][j], 1);
		}
	}
	cout << ret << '\n';
	return 0;
}
/*!SECTION

logic to check san bongwoori
	same height area
	check injup
	return 1 or 0

*/