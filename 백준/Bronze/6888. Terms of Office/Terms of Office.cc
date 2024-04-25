#include <bits/stdc++.h>
using namespace std;
int x_year, y_year;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> x_year >> y_year;
	for (int i = 0; i <= (y_year - x_year); i++) {
		if (i % 4 == 0 && i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
			cout << "All positions change in year " << x_year + i << '\n';
		}
	}
	return 0;
}