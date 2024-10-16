#include <bits/stdc++.h>
using namespace std;
int t, n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		long long ret = 0;
		for (int i = 1; i <= n; i++) {
			// sum formula of i + 1
			int sum_tmp = 0;
			for (int j = 1; j <= i + 1; j++) {
				sum_tmp += j;
			}
			ret += sum_tmp * i;
		}
		cout << ret << '\n';
	}
	return 0;
}