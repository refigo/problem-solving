#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << ++cnt;
			if (j == m) cout << '\n';
			else cout << ' ';
		}
	}
	return 0;
}