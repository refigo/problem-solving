#include <bits/stdc++.h>
using namespace std;
int n, m, jx, jy, bx, by, cnt;
int y, x, ny, nx, cpos, npos;
bool flag;
char tmp;
int a[304][304];
int visited[304][304];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	cin >> jx >> jy >> bx >> by;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmp;
			if (tmp == '1') {
				a[i][j] = 1;
			}
			if (tmp == '0' || tmp == '#' || tmp == '*') {
				a[i][j] = 0;
			}
		}
	}
	jx--, jy--, bx--, by--;
	if (jy == by && jx == bx) {
		cout << 1 << '\n';
	}
	queue<int> q;
	int jpos = jx * 1000 + jy;
	q.push(jpos);
	visited[jx][jy] = 1;
	cnt = 1;
	while (q.size()) {
		queue<int> q_next;
		while (q.size()) {
			cpos = q.front(); q.pop();
			x = cpos / 1000;
			y = cpos % 1000;
			if (y == by && x == bx) {
				flag = true;
				break ;
			}
			for (int i = 0; i < 4; i++) {
				ny = y + dy[i];
				nx = x + dx[i];
				if (ny < 0 || nx < 0 || ny >= m || nx >= n)
					continue;
				npos = 1000 * nx + ny;
				if (visited[nx][ny]) continue;
				if (a[nx][ny] == 1) {
					q_next.push(npos);
				} else {
					q.push(npos);
				}
				visited[nx][ny] = cnt;
			}
		}
		if (flag == true) {
			break ;
		}
		q = q_next;
		cnt++;
	}
	cout << visited[bx][by] << '\n';
	return 0;
}