#include <bits/stdc++.h>
using namespace std;
int t, j;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> j;
		for (int i = 0; i < j; i++) {
			for (int k = 0; k < j; k++) {
				if (i == 0 || i == j - 1 || k == 0 || k == j - 1) cout << "#";
				else cout << "J";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}