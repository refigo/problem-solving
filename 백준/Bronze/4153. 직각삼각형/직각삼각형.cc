#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> a >> b >> c;
		if (a <= 0 && b <= 0 && c <= 0)
			break;
		if (c > a && c > b 
		&& (pow(c, 2) == pow(a, 2) + pow(b, 2))) {
			cout << "right\n";
			continue;
		}
		if (a > b && a > c 
		&& (pow(a, 2) == pow(b, 2) + pow(c, 2))) {
			cout << "right\n";
			continue;
		}
		if (b > a && b > c 
		&& (pow(b, 2) == pow(a, 2) + pow(c, 2))) {
			cout << "right\n";
			continue;
		}
		cout << "wrong\n";
	}
	return 0;
}