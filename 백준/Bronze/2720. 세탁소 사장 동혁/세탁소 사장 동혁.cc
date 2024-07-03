#include <bits/stdc++.h>
using namespace std;
int t, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> c;
		// quarter
		cout << c / 25 << ' ';
		// dime
		c %= 25;
		cout << c / 10 << ' ';
		// nickel
		c %= 10;
		cout << c / 5 << ' ';
		// penny
		c %= 5;
		cout << c << '\n';
	}
	return 0;
}