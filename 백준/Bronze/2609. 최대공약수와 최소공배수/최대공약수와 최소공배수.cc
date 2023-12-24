#include <bits/stdc++.h>
using namespace std;
int a, b, mx, mn;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b;
	if (a > b) {
		mx = a;
		mn = b;
	} else {
		mx = b;
		mn = a;
	}
	for (int i = mn; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << i << "\n";
			break ;
		}
	}
	for (int i = mx; ; i++) {
		if (i % a == 0 && i % b == 0) {
			cout << i << "\n";
			break ;
		}
	}
	return 0;
}