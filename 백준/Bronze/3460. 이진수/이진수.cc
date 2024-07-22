#include <bits/stdc++.h>
using namespace std;
int t, n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		int idx = 0;
		while (n) {
			if (n % 2 != 0)
				cout << idx << ' ';
			n /= 2;
			idx++;
		}
	}
	return 0;
}