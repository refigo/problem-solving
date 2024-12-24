#include <bits/stdc++.h>
using namespace std;
int t, n, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i += 2) {
			ret += i;
		}
		cout << ret << '\n';
		ret = 0;
	}
	return 0;
}