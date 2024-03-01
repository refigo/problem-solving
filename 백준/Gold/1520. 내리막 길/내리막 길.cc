#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[504][504];
int dp[504][504];
int visited[504][504];
int ny, nx;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int dfs(int y, int x) {
	if (y == m - 1 && x == n - 1) {
		dp[m - 1][n - 1] = 1;
		visited[m - 1][n - 1] = 1;
		return dp[m - 1][n - 1];
	}
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= m || nx >= n)
			continue;
		if (a[ny][nx] >= a[y][x]) continue;
		if (dp[ny][nx] || visited[ny][nx]) {
			dp[y][x] += dp[ny][nx];
		} else {
			dp[y][x] += dfs(ny, nx);
		}
	}
	visited[y][x] = 1;
	return dp[y][x];
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	dp[m - 1][n - 1] = 1;
	dfs(0, 0);
	cout << dp[0][0] << '\n';

	// cout << "dp\n";
	// for (int i = 0; i < m; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cout << dp[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	// cout << "visited\n";
	// for (int i = 0; i < m; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cout << visited[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	return 0;
}