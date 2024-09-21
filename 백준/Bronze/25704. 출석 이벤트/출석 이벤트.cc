#include <bits/stdc++.h>
using namespace std;
int n, p, to_pay_min = 987654321;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> p;
	to_pay_min = p;
	if (n >= 5) {
		to_pay_min = min(p - 500, to_pay_min);
		// cout << "n >= 5: " << p - 500 << '\n';
	}
	if (n >= 10) {
		to_pay_min = min((int)((float)p * 0.9), to_pay_min);
		// cout << "n >= 10: " << (int)((float)p * 0.9) << '\n';
	}
	if (n >= 15) {
		to_pay_min = min(p - 2000, to_pay_min);
		// cout << "n >= 15: " << p - 2000 << '\n';
	}
	if (n >= 20) {
		to_pay_min = min((int)((float)p * 0.75), to_pay_min);
		// cout << "n >= 20: " << (int)((float)p * 0.75) << '\n';
	}
	if (to_pay_min < 0) to_pay_min = 0;
	cout << to_pay_min;
	return 0;
}