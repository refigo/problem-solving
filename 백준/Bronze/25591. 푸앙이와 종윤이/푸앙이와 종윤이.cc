#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, q, r;
int num1, num2;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> num1 >> num2;
	a = 100 - num1;
	b = 100 - num2;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
	cout << c + q << ' ' << r;
	return 0;
}