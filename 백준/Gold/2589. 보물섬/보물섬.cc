#include <bits/stdc++.h>
using namespace std;
int l, w, ret = INT_MIN;
char a[54][54];
int visited[54][54];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
void bfs(int y, int x) {
	int ny = 0, nx = 0;
	int mx = 0;
	fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
	queue<pair<int, int>> q;
	visited[y][x] = 1;
	q.push({y, x});
	while (q.size()) {
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (visited[ny][nx] || a[ny][nx] == 'W')
				continue;
			if (ny < 0 || nx < 0 || ny >= l || nx >= w)
				continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
			mx = max(mx, visited[ny][nx]);
		}
	}
	if (mx > 0) {
		ret = max(ret, mx);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> l >> w;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			if (a[i][j] == 'L') {
				bfs(i, j);
			}
		}
	}
	cout << ret - 1 << '\n';
	return 0;
}