#include <bits/stdc++.h>
using namespace std;
int R, C, ret;
string s;
char a[24][24];
bool check[30];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
void dfs(int y, int x, int depth) {
	ret = max(ret, depth);
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= R || nx >= C)
			continue;
		if (check[a[ny][nx] - 'A']) continue;
		check[a[ny][nx] - 'A'] = 1;
		dfs(ny, nx, depth + 1);
		check[a[ny][nx] - 'A'] = 0;
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		cin >> s;
		for (int j = 0; j < C; j++) {
			a[i][j] = s[j];
		}
	}
	check[a[0][0] - 'A'] = 1;
	dfs(0, 0, 1);
	cout << ret << '\n';
	return 0;
}