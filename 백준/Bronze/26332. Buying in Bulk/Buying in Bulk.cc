#include <bits/stdc++.h>
using namespace std;
int n, c, p;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> p;
		// int ret = 0;
		cout << c << ' ' << p << '\n';
		cout << (c * p) - (2 * (c - 1)) << '\n';
	}
	return 0;
}