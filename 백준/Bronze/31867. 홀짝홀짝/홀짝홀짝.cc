#include <bits/stdc++.h>
using namespace std;
int n;
string k;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> k;
	int cnt_odd = 0, cnt_even = 0;
	for (int i = 0; i < n; i++) {
		if ((k[i] - '0') % 2 == 1) {
			cnt_odd++;
		} else {
			cnt_even++;
		}
	}
	if (cnt_even > cnt_odd) {
		cout << "0\n";
	} else if (cnt_odd > cnt_even) {
		cout << "1\n";
	} else {
		cout << -1 << '\n';
	}
	return 0;
}