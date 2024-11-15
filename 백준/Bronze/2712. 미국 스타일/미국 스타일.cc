#include <bits/stdc++.h>
using namespace std;
int t;
float value;
string unit;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> value;
		cin >> unit;
		if (unit == "kg") {
			cout << fixed << setprecision(4) << value * 2.2046 << " lb" << '\n';
		}
		else if (unit == "l") {
			cout << fixed << setprecision(4) << value * 0.2642 << " g" << '\n';
		}
		else if (unit == "lb") {
			cout << fixed << setprecision(4) << value * 0.4536 << " kg" << '\n';
		}
		else if (unit == "g") {
			cout << fixed << setprecision(4) << value * 3.7854 << " l" << '\n';
		}
	}
	return 0;
}