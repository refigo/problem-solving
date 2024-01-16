#include <bits/stdc++.h>
using namespace std;
int r, c, k, ret;
string s;
char a[9][9];
int visited[9][9];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
void go(int y, int x, int depth) {
	if (depth >= k) {
		if (y == 0 && x == c - 1) {
			ret++;
		}
		return ;
	}
	int ny = 0, nx = 0;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= r || nx >= c)
			continue ;
		if (visited[ny][nx]) continue ;
		if (a[ny][nx] == 'T') continue ;
		visited[ny][nx] = 1;
		go(ny, nx, depth + 1);
		visited[ny][nx] = 0;
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> r >> c >> k;
	for (int i = 0; i < r; i++) {
		cin >> s;
		for (int j = 0; j < c; j++) {
			a[i][j] = s[j];
		}
	}
	visited[r - 1][0] = 1;
	go(r - 1, 0, 1);
	cout << ret << '\n';
	return 0;
}