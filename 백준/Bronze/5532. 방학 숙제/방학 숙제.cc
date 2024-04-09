#include <bits/stdc++.h>
using namespace std;
int l, a, b, c, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> l >> a >> b >> c >> d;
	int math_l = a / c + (a % c != 0);
	int korean_l = b / d + (b % d != 0);
	cout << l - max(math_l, korean_l) << '\n';
	return 0;
}