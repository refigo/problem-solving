#include <bits/stdc++.h>
using namespace std;
int a[104][104][104];
int m, n, h;
int cnt, turn;
int cx, cy, cz, nx, ny, nz;
struct xyz {
	int x, y, z;
};
const int dz[6] = {0 ,0, 0, 0, 1, -1};
const int dy[6] = {-1, 0, 1, 0, 0, 0};
const int dx[6] = {0, 1, 0, -1, 0, 0};
vector<xyz> v;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> a[i][j][k];
				if (a[i][j][k] == 0) {
					++cnt;
				}
				if (a[i][j][k] == 1) {
					v.push_back({k, j, i});
				}
			}
		}
	}
	while (cnt) {
		int prev_cnt = cnt;
		vector<xyz> tmp;
		for (auto there : v) {
			cx = there.x;
			cy = there.y;
			cz = there.z;
			for (int i = 0; i < 6; i++) {
				nx = cx + dx[i];
				ny = cy + dy[i];
				nz = cz + dz[i];
				if (nx < 0 || ny < 0 || nz < 0 || nx >= m || ny >= n || nz >= h)
					continue;
				if (a[nz][ny][nx] == -1 || a[nz][ny][nx] == 1) continue;
				a[nz][ny][nx] = 1;
				tmp.push_back({nx, ny, nz});
				cnt--;
			}
		}
		if (prev_cnt == cnt) {
			turn = -1;
			break ;
		}
		v = tmp;
		turn++;
	}
	cout << turn << '\n';
	return 0;
}