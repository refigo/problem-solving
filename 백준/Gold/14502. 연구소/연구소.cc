#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[12][12];
int visited[12][12];
vector<pair<int, int>> virus_list;
vector<pair<int, int>> wall_list;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int ret;
void dfs(int ay, int ax) {
	int ny, nx;
	
	for (int i = 0; i < 4; i++) {
		ny = ay + dy[i];
		nx = ax + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;
		if (visited[ny][nx] || a[ny][nx] != 0)
			continue;
		visited[ny][nx] = 1;
		dfs(ny, nx);
	}
}
int solve() {
	int cnt = 0;
	fill(&visited[0][0], &visited[0][0] + 12 * 12, 0);
	for (auto virus : virus_list) {
		visited[virus.first][virus.second] = 1;
		dfs(virus.first, virus.second);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0 && !visited[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 2)
				virus_list.push_back({i, j});
			if (a[i][j] == 0)
				wall_list.push_back({i, j});
		}
	}
	for (int i = 0; i < wall_list.size(); i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				a[wall_list[i].first][wall_list[i].second] = 1;
				a[wall_list[j].first][wall_list[j].second] = 1;
				a[wall_list[k].first][wall_list[k].second] = 1;
				ret = max(ret, solve());
				a[wall_list[i].first][wall_list[i].second] = 0;
				a[wall_list[j].first][wall_list[j].second] = 0;
				a[wall_list[k].first][wall_list[k].second] = 0;
			}
		}
	}
	cout << ret << "\n";
	return 0;
}