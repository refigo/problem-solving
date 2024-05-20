#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	if (a == b && b == c && c == a) {
		cout << '*' << '\n';
		return 0;
	}
	if (a == b) {
		cout << 'C' << '\n';
		return 0;
	}
	if (b == c) {
		cout << 'A' << '\n';
		return 0;
	}
	if (c == a) {
		cout << 'B' << '\n';
		return 0;
	}
	return 0;
}