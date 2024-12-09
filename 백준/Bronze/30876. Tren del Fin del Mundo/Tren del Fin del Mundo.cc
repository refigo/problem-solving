#include <bits/stdc++.h>
using namespace std;
int n;
int most_south_x, most_south_y = 1001;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	int x = 1001, y = 1001;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (y < most_south_y) {
			most_south_x = x;
			most_south_y = y;
		}
	}
	cout << most_south_x << " " << most_south_y;
	return 0;
}