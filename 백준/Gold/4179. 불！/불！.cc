#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int r, c, ret;
char a[1004][1004];
int fire_level[1004][1004];
int man_level[1004][1004];
vector<pair<int, int>> fire_poses;
int my, mx, y, x, ny, nx;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'F') {
				fire_poses.push_back({i, j});
			}
			if (a[i][j] == 'J') {
				my = i, mx = j;
			}
		}
	}

	fill(&fire_level[0][0], &fire_level[0][0] + 1004 * 1004, INF);
	queue<pair<int, int>> q;
	for (auto pos : fire_poses) {
		q.push(pos);
		fire_level[pos.first][pos.second] = 1;
	}
	while (q.size()) {
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (fire_level[ny][nx] != INF)
				continue;
			if (ny < 0 || nx < 0 || ny >= r || nx >= c)
				continue;
			if (a[ny][nx] == '#')
				continue;
			fire_level[ny][nx] = fire_level[y][x] + 1;
			q.push({ny, nx});
		}
	}

	q.push({my, mx});
	man_level[my][mx] = 1;
	while (q.size()) {
		tie(y, x) = q.front(); q.pop();
		if (y == 0 || x == 0 || y == r - 1 || x == c - 1) {
			ret = man_level[y][x];
			break;
		}
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (man_level[ny][nx])
				continue;
			if (ny < 0 || nx < 0 || ny >= r || nx >= c)
				continue;
			if (a[ny][nx] == '#')
				continue;
			if (man_level[y][x] + 1 >= fire_level[ny][nx])
				continue;
			man_level[ny][nx] = man_level[y][x] + 1;
			q.push({ny, nx});
		}
	}
	if (ret) {
		cout << ret << '\n';
	} else {
		cout << "IMPOSSIBLE" << '\n';
	}
	return 0;
}