#include <bits/stdc++.h>
using namespace std;
int t, g, c, e;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> g >> c >> e;
		int diff = e - c;
		if (diff <= 0) {
			cout << 0 << '\n';
			continue;
		}
		if (g == 1) {
			cout << diff << '\n';
		} else if (g == 2) {
			cout << diff * 3 << '\n';
		} else if (g == 3) {
			cout << diff * 5 << '\n';
		}
	}
	return 0;
}