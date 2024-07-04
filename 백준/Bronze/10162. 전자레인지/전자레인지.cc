#include <bits/stdc++.h>
using namespace std;
int t, a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	if (t >= 300) {
		a = t / 300;
		t %= 300;
	}
	if (t >= 60) {
		b = t / 60;
		t %= 60;
	}
	if (t >= 10) {
		c = t / 10;
		t %= 10;
	}
	if (t) cout << -1;
	else cout << a << ' ' << b << ' ' << c;
	return 0;
}