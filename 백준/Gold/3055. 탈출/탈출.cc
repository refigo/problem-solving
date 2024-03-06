#include <bits/stdc++.h>
using namespace std;
int r, c, sy, sx;
string s;
char a[54][54];
int visited[54][54];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int hy, hx, ny, nx;
queue<pair<int, int>> wq;
queue<pair<int, int>> dq;
void water_logic() {
	queue<pair<int, int>> nq;
	while (wq.size()) {
		tie(hy, hx) = wq.front(); wq.pop();
		for (int i = 0; i < 4; i++) {
			ny = hy + dy[i];
			nx = hx + dx[i];
			if (ny < 0 || nx < 0 || ny >= r || nx >= c)
				continue;
			if (a[ny][nx] == 'X' || a[ny][nx] == 'D' || a[ny][nx] == '*')
				continue;
			a[ny][nx] = '*';
			nq.push({ny, nx});
		}
	}
	wq = nq;
}
void dochi_logic() {
	queue<pair<int, int>> nq;
	while (dq.size()) {
		tie(hy, hx) = dq.front(); dq.pop();
		for (int i = 0; i < 4; i++) {
			ny = hy + dy[i];
			nx = hx + dx[i];
			if (ny < 0 || nx < 0 || ny >= r || nx >= c)
				continue;
			if (a[ny][nx] == 'X' || a[ny][nx] == '*')
				continue;
			if (visited[ny][nx]) continue;
			visited[ny][nx] = visited[hy][hx] + 1;
			nq.push({ny, nx});
		}
	}
	dq = nq;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> s;
		for (int j = 0; j < c; j++) {
			a[i][j] = s[j];
			if (a[i][j] == 'S') {
				visited[i][j] = 1;
				dq.push({i, j});
				a[i][j] = '.';
			}
			if (a[i][j] == '*') {
				wq.push({i, j});
			}
			if (a[i][j] == 'D') {
				sy = i, sx = j;
			}
		}
	}
	while (dq.size()) {
		water_logic();
		dochi_logic();
		if (visited[sy][sx]) break ;
	}
	if (visited[sy][sx])
		cout << visited[sy][sx] - 1 << '\n';
	else
		cout << "KAKTUS\n";
	return 0;
}
/*!SECTION

BFS
	water logic
	dochi logic

cout visited of D

*/
