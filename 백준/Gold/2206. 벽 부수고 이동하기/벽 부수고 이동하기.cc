#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1004][1004];
int visited[1004][1004][2];
string s;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int ret = INT_MAX, ny, nx;
struct bs {
	int y;
	int x;
	bool broken;
};
void bfs() {
	queue<bs> q;
	q.push({0, 0, false});
	visited[0][0][0] = 1;
	int hy = 0; int hx = 0;
	bool hb = false;
	struct bs here;
	while (q.size()) {
		here = q.front();
		hy = here.y, hx = here.x, hb = here.broken;
		q.pop();
		if (hy == n - 1 && hx == m - 1) {
			ret = min(ret, visited[hy][hx][hb]);
		}
		for (int i = 0; i < 4; i++) {
			ny = hy + dy[i];
			nx = hx + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m)
				continue;
			if (!hb) {
				if (a[ny][nx] == '1') {
					q.push({ny, nx, true});
					visited[ny][nx][1] = visited[hy][hx][0] + 1;
				} else {
					if (visited[ny][nx][0]) continue;
					q.push({ny, nx, false});
					visited[ny][nx][0] = visited[hy][hx][0] + 1;
				}
			}
			if (hb) {
				if (a[ny][nx] == '1') continue;
				if (visited[ny][nx][1]) continue;
				q.push({ny, nx, true});
				visited[ny][nx][1] = visited[hy][hx][1] + 1;
			}
		}
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
		}
	}
	bfs();
	if (ret == INT_MAX) cout << -1 << '\n';
	else cout << ret << '\n';
	return 0;
}
/*
BFS
	break 1 and run (X)
		Time Complexity
			(V+E)^2 -> (5V)^2 -> 25V^2 -> 25,000,000
	DP (already broke or until not broke)
		TC -> V^2 -> 1,000,000
		if wall -> break or not break
		set min in visited
*/