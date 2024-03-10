#include <bits/stdc++.h>
using namespace std;
int r, c;
string s;
char a[104][104];
int visited[104][104];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int ny, nx, ret;
void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= r || nx >= c)
			continue;
		if (a[ny][nx] == '.' || visited[ny][nx])
			continue;
		dfs(ny, nx);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> s;
		for (int j = 0; j < c; j++) {
			a[i][j] = s[j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (a[i][j] == '.' || visited[i][j])
				continue;
			dfs(i, j);
			ret++;
		}
	}
	cout << ret << '\n';
	return 0;
}
/*
CC
	DFS or BFS
*/