#include <bits/stdc++.h>
using namespace std;
int n, m, ny, nx;
int a[304][304];
int visited[304][304];
int turn, cc;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<pair<int, int>> v;
void print() {
	cout << "print\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}
void clear() {
	fill(&visited[0][0], &visited[n + 1][m + 1], 0);
}
void dfs(int y, int x) {
	// cout << y << " : " << x << '\n';
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;
		if (a[ny][nx] == 0 || visited[ny][nx]) continue;
		visited[ny][nx] = 1;
		dfs(ny, nx);
	}
}
void melt_dfs(int y, int x) {
	int bing = 0;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (!a[ny][nx]) ++bing;
	}
	if (a[y][x] - bing <= 0) {
		v.push_back({y, x});
	} else {
		a[y][x] -= bing;
	}
}
void melt() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) continue;
			melt_dfs(i, j);
		}
	}
	for (auto each : v) {
		a[each.first][each.second] = 0;
		// cout << each.first << " : " << each.second << '\n';
	}
	v.clear();
}
int check_cc() {
	int ret_cc = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0 || visited[i][j]) continue;
			visited[i][j] = 1;
			dfs(i, j);
			++ret_cc;
		}
	}
	// cout << "cc: " << ret_cc << '\n';
	// print();
	return ret_cc;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cc = check_cc();
	clear();
	while (cc < 2 && cc != 0) {
		melt();
		cc = check_cc();
		turn++;
		clear();
		// print();
	}
	if (cc < 2) {
		turn = 0;
	}
	cout << turn << '\n';
	return 0;
}
/*!SECTION
dfs
melt
check_cc
*/