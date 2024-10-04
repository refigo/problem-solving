#include <bits/stdc++.h>
using namespace std;
int t, n, k;
int candies[104];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> candies[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans += candies[i] / k;
		}
		cout << ans << '\n';
	}
	return 0;
}