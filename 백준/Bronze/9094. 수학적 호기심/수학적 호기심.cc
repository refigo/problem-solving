#include <bits/stdc++.h>
using namespace std;
long long t, n, m, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ret = 0;
		for (int a = 1; a < n; a++) {
			for (int b = a + 1; b < n; b++) {
				if ((a * a + b * b + m) % (a * b) == 0) {
					ret++;
				}
			}
		}
		cout << ret << '\n';
	}
	return 0;
}