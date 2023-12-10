#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[104][104];
int visited[104][104];
int ret;
int total_hour, last_remain;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
void init_visited() {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			visited[i][j] = 0;
		}
	}
}
int dfs(int ay, int ax) {
	int cnt = 0;
	
	if (a[ay][ax] == 0) {
		visited[ay][ax] = 1;
	} else {
		visited[ay][ax] = 2;
		a[ay][ax] = 0;
		return (++cnt);
	}
	for (int i = 0; i < 4; ++i) {
		int ny = ay + dy[i];
		int nx = ax + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue ;
		if (visited[ny][nx])
			continue ;
		cnt += dfs(ny, nx);
	}
	return cnt;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	while (true) {
		ret = dfs(0, 0);
		if (ret == 0)
			break ;
		++total_hour;
		last_remain = ret;
		ret = 0;
		init_visited();
	}
	cout << total_hour << "\n";
	cout << last_remain << "\n";
	return 0;
}