#include <bits/stdc++.h>
using namespace std;
int n, x, s, t;
int ret = -1;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		if (s + t <= x) {
			ret = max(ret, s);
		}
	}
	cout << ret;
	return 0;
}