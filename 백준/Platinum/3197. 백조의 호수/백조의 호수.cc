#include <bits/stdc++.h>
using namespace std;
char a[1504][1504];
int l_visited[1504][1504];
int w_visited[1504][1504];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int R, C, ly, lx;
int cnt = 1, y, x, ny, nx;
bool flag;
queue<pair<int, int>> wq;
queue<pair<int, int>> lq;

void bfs_swan() {
	queue<pair<int, int>> lq_next;
	while (lq.size()) {
		tie(y, x) = lq.front(); lq.pop();
		if (a[y][x] == 'L') {
			flag = true;
			return ;
		}
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= R || nx >= C)
				continue;
			if (l_visited[ny][nx]) continue;
			l_visited[ny][nx] = cnt;
			if (a[ny][nx] == 'X') {
				lq_next.push({ny, nx});
			} else {
				lq.push({ny, nx});
			}
		}
	}
	lq = lq_next;
}

void bfs_water() {
	queue<pair<int, int>> wq_next;
	while (wq.size()) {
		tie(y, x) = wq.front(); wq.pop();
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= R || nx >= C)
				continue;
			if (w_visited[ny][nx]) continue;
			w_visited[ny][nx] = cnt;
			if (a[ny][nx] == 'X') {
				wq_next.push({ny, nx});
				a[ny][nx] = '.';
			} else {
				wq.push({ny, nx});
			}
		}
	}
	wq = wq_next;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'L')
				ly = i, lx = j;
			if (a[i][j] != 'X') {
				wq.push({i, j});
				w_visited[i][j] = cnt;
			}
		}
	}
	lq.push({ly, lx});
	l_visited[ly][lx] = cnt;
	a[ly][lx] = '.';
	bfs_swan();
	while (flag == false) {
		cnt++;
		bfs_water();
		bfs_swan();
	}
	cout << cnt - 1 << '\n';
	return 0;
}