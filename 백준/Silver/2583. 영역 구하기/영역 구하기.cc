#include <bits/stdc++.h>
using namespace std;
int m, n, k;

const int n_max = 104;
int a[n_max][n_max];
int visited[n_max][n_max];

int ldx, ldy, rux, ruy;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int ans_area;
int ans_cnt;

void dfs(int y, int x) {
	visited[y][x] = 1;
	++ans_area;
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= m ||
			nx < 0 || nx >= n)
			continue;
		if (a[ny][nx] == 1 || visited[ny][nx])
			continue;
		dfs(ny, nx);
	}
	return ;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m >> n >> k;
	while (k--){
		cin >> ldx >> ldy >> rux >> ruy;
		for (int i = ldy; i < ruy; i++){
			for (int j = ldx; j < rux; j++){
				a[m - i - 1][j] = 1;
			}
		}
	}
	multiset<int> ans_areas;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (a[i][j] == 1 || visited[i][j])
				continue;
			dfs(i, j);
			ans_areas.insert(ans_area);
			++ans_cnt;
			ans_area = 0;
		}
	}
	cout << ans_cnt << '\n';
	for (int each : ans_areas) {
		cout << each << ' ';
	}
	cout << '\n';	
	return 0;
}