#include <bits/stdc++.h>
using namespace std;
int n, l, r, ny, nx, sum, cnt;
int a[54][54];
int visited[54][54];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
vector<pair<int, int>> v;
void dfs(int y, int x) {
	int diff_num = 0;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (visited[ny][nx]) continue;
		if (ny < 0 || nx < 0 || ny >= n || nx >= n)
			continue;
		diff_num = abs(a[y][x] - a[ny][nx]);
		if (l <= diff_num && diff_num <= r) {
			visited[ny][nx] = 1;
			sum += a[ny][nx];
			v.push_back({ny, nx});
			dfs(ny, nx);
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> l >> r;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	while (true) {
		bool flag = false;
		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (visited[i][j])
					continue;
				v.clear();
				v.push_back({i, j});
				visited[i][j] = 1;
				sum = a[i][j];
				dfs(i, j);
				if (v.size() == 1) {
					continue;
				}
				for (pair<int, int> d : v) {
					a[d.first][d.second] = sum / v.size();
					flag = true;
				}
			}
		}
		if (flag == false) {
			break ;
		}
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}