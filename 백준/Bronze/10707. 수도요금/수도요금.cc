#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, p;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> p;
	int x = a * p;
	int y = b + (p - c > 0 ? (p - c) * d : 0);
	cout << (x < y ? x : y);
	return 0;
}