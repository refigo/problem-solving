#include <bits/stdc++.h>
using namespace std;
int t, tmp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> tmp;
		int cnt_five = 0;
		while (tmp >= 5) {
			cnt_five += tmp / 5;
			tmp %= 5;
		}
		// debug
		// cout << "tmp: " << tmp << " cnt_five: " << cnt_five << '\n';
		for (int j = 0; j < cnt_five; j++) {
			cout << "++++ ";
		}
		for (int j = 0; j < tmp; j++) {
			cout << "|";
		}
		cout << '\n';
	}
	return 0;
}