#include <bits/stdc++.h>
using namespace std;
int c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> c;
	if (c == 1) {
		cout << 1 << endl;
		return 0;
	}
	for (int n = 2; ; n++) {
		if (c % 2 == 0) {
			c = c / 2;
		} else {
			c = 3 * c + 1;
		}
		if (c == 1) {
			cout << n << endl;
			break;
		}
	}
	return 0;
}