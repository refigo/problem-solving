#include <bits/stdc++.h>
using namespace std;
int n;
char a[104][104];
bool visited[104][104];
string s;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int ny, nx, cnt_nm, cnt_rg;
void dfs_rg(int y, int x, char clr) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if (clr == 'R' || clr == 'G') {
			if (a[ny][nx] == 'B') continue;
		} else {
			if (a[ny][nx] != 'B') continue;
		}
		if (visited[ny][nx]) continue;
		dfs_rg(ny, nx, clr);
	}
}
void dfs(int y, int x, char clr) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if (visited[ny][nx] || a[ny][nx] != clr) continue;
		dfs(ny, nx, clr);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			a[i][j] = s[j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j]) continue;
			dfs(i, j, a[i][j]);
			cnt_nm++;
		}
	}
	fill(&visited[0][0], &visited[n][n], 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j]) continue;
			dfs_rg(i, j, a[i][j]);
			cnt_rg++;
		}
	}
	cout << cnt_nm << ' ';
	cout << cnt_rg << '\n';
	return 0;
}