#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[1004][1004];
int cnt, ret, cy, cx, ny, nx;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<pair<int, int>> v;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 0) {
				cnt++;
			}
			if (a[i][j] == 1) {
				v.push_back({i, j});
			}
		}
	}
	while (cnt) {
		vector<pair<int, int>> tmp;
		int prev_cnt = cnt;
		for (auto there : v) {
			cy = there.first;
			cx = there.second;
			for (int i = 0; i < 4; i++) {
				ny = cy + dy[i];
				nx = cx + dx[i];
				if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
				if (a[ny][nx] != 0) continue;
				a[ny][nx] = 1;
				tmp.push_back({ny, nx});
				cnt--;
			}
		}
		if (prev_cnt == cnt) {
			ret = -1;
			break ;
		}
		v = tmp;
		ret++;
	}
	cout << ret << '\n';
	return 0;
}