#include <bits/stdc++.h>
using namespace std;
int t, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> d;
		int max_cur = 0;
		for (int i = 0; i < d; i++) {
			if (i + pow(i, 2) > d) {
				break;
			}
			max_cur = i;
		}
		cout << max_cur << '\n';
	}
	return 0;
}