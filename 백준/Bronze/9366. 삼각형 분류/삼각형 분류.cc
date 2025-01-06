#include <bits/stdc++.h>
using namespace std;
int t, a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b >> c;
		cout << "Case #" << i << ": ";
		if (a + b > c && b + c > a && c + a > b) {
			if (a == b && b == c) {
				cout << "equilateral\n";
			} else if (a == b || b == c || c == a) {
				cout << "isosceles\n";
			} else {
				cout << "scalene\n";
			}
		} else {
			cout << "invalid!\n";
		}
	}
	return 0;
}