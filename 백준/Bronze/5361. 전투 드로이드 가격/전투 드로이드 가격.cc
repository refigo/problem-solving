#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e;
int t;
double payment;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d >> e;
		payment = a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
		cout << fixed << setprecision(2) << "$" << payment << '\n';
	}
	return 0;
}