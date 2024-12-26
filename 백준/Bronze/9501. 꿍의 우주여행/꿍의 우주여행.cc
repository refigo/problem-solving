#include <bits/stdc++.h>
using namespace std;
int t, n, d;
int v, f, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n >> d;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> v >> f >> c;
			if (v * f >= c * d) ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}