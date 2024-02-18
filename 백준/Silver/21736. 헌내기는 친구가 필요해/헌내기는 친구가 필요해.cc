#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[604][604];
int visited[604][604];
int sy, sx, ny, nx, ret;
string s;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;
		if (visited[ny][nx] || a[ny][nx] == 'X') continue;
		if (a[ny][nx] == 'P') ret++;
		dfs(ny, nx);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			a[i][j] = s[j];
			if (a[i][j] == 'I') {
				sy = i;
				sx = j;
			}
		}
	}
	dfs(sy, sx);
	if (!ret)
		cout << "TT\n";
	else
		cout << ret << '\n';
	return 0;
}