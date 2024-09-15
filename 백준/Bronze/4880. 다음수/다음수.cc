#include <bits/stdc++.h>
using namespace std;
int a1, a2, a3;
int ap, gp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> a1 >> a2 >> a3;
		if (a1 == 0 && a2 == 0 && a3 == 0) break;
		ap = gp = 0;
		if (a2 - a1 == a3 - a2) {
			ap = a2 - a1;
			// cout << "AP: " << ap << '\n';
		} else if (a2 / a1 == a3 / a2) {
			gp = a2 / a1;
			// cout << "GP: " << gp << '\n';
		}
		if (gp) {
			cout << "GP " << a3 * gp << '\n';
		}
		else if (ap) {
			cout << "AP " << a3 + ap << '\n';
		}
	}
	return 0;
}