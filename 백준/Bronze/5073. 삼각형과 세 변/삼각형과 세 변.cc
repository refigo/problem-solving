#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (a == b && b == c) cout << "Equilateral\n";
		else if (a + b <= c || a + c <= b || b + c <= a) cout << "Invalid\n";
		else if (a == b || b == c || a == c) cout << "Isosceles\n";
		else cout << "Scalene\n";
	}
	return 0;
}