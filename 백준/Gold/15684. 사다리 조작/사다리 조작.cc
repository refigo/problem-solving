#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, m, h, a, b, ret = INF;
int arr[14][34];
bool is_valid() {
	int cur = 0;
	for (int i = 1; i <= n; i++) {
		cur = i;
		for (int j = 1; j <= h; j++) {
			if (arr[cur][j] == 1) {
				++cur;
			} else if (arr[cur - 1][j] == 1) {
				--cur;
			}
		}
		if (cur != i) {
			return false;
		}
	}
	return true;
}
void go(int y, int x, int cnt) {
	if (cnt > 3 || ret <= cnt) {
		return ;
	}
	if (is_valid()) {
		ret = min(ret, cnt);
		return ;
	}
	for (int i = y; i <= n; i++) {
		for (int j = 1; j <= h; j++) {
			if (i <= y && j < x) continue;
			if (arr[i - 1][j]
			 || arr[i + 1][j]
			 || arr[i][j])
				continue ;
			arr[i][j] = 1;
			go(i, j, cnt + 1);
			arr[i][j] = 0;
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m >> h;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[b][a] = 1;
	}
	go(1, 1, 0);
	if (ret == INF) {
		cout << -1 <<'\n';
	} else {
		cout << ret << '\n';
	}
	return 0;
}