#include <bits/stdc++.h>
using namespace std;
int tc, m, n, k;

int x, y;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

const int n_max = 54;
int a[n_max][n_max], visited[n_max][n_max];

int ans;

void init() {
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			a[i][j] = 0;
			visited[i][j] = 0;
		}
	}
	ans = 0;
}

int dfs(int y, int x) {
	if (a[y][x] == 0 || visited[y][x]) {
		return 0;
	}
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || 
			nx < 0 || nx >= m ||
			a[ny][nx] == 0)
			continue;
		if (visited[ny][nx])
			continue;
		dfs(ny, nx);
	}
	return 1;
}

void logic() {
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			ans += dfs(i, j);
		}
	}
	cout << ans << '\n';
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tc;
	while (tc--){
		cin >> m >> n >> k;
		while (k--){
			cin >> x >> y;
			a[y][x] = 1;
		}
		logic();
		init();
	}
	return 0;
}