#include <bits/stdc++.h>
using namespace std;
int n, k, g, p, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> g;
		p = g * 100 / n;
		if (0 <= p && p <= 4) {
			d = 1;
		} else if (4 < p && p <= 11) {
			d = 2;
		} else if (11 < p && p <= 23) {
			d = 3;
		} else if (23 < p && p <= 40) {
			d = 4;
		} else if (40 < p && p <= 60) {
			d = 5;
		} else if (60 < p && p <= 77) {
			d = 6;
		} else if (77 < p && p <= 89) {
			d = 7;
		} else if (89 < p && p <= 96) {
			d = 8;
		} else if (96 < p && p <= 100) {
			d = 9;
		}
		cout << d << ' ';
	}
	return 0;
}