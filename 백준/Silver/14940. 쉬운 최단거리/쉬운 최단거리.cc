#include <bits/stdc++.h>
using namespace std;
int n, m, i, j;
int sy, sx, ny, nx;
int a[1004][1004];
int visited[1004][1004];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({y, x});
	visited[y][x] = 1;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m)
				continue;
			if (visited[ny][nx] || a[ny][nx] == 0) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 2) {
				sy = i; sx = j;
			}
		}
	}
	bfs(sy, sx);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == 0) {
				if (a[i][j] == 1) {
					cout << -1;
				} else {
					cout << 0;
				}
			} else {
				cout << visited[i][j] - 1;
			}
			cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}