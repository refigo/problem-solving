#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int cnt = 0;
	cout << setprecision(3) << fixed;
	while (1) {
		++cnt;
		cin >> a >> b >> c;
		float l = 0;
		if (a == 0 && b == 0 && c == 0) break;
		cout << "Triangle #" << cnt << '\n';
		if (a == -1) {
			l = sqrt(c * c - b * b);
			if (l <= 0 || isnan(l)) {
				cout << "Impossible." << '\n';
				cout << '\n';
				continue;
			}
			cout << "a = " << l << endl;
		}
		if (b == -1) {
			l = sqrt(c * c - a * a);
			// check nan
			if (l <= 0 || isnan(l)) {
				cout << "Impossible." << '\n';
				cout << '\n';
				continue;
			}
			cout << "b = " << l << endl;
		}
		if (c == -1) {
			l = sqrt(a * a + b * b);
			if (l <= 0 || isnan(l)) {
				cout << "Impossible." << '\n';
				cout << '\n';
				continue;
			}
			cout << "c = " << l << endl;
		}
		cout << '\n';
	}
	return 0;
}