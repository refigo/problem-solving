#include <bits/stdc++.h>
using namespace std;
int x, l, r, the_nearest_value;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> x >> l >> r;
	the_nearest_value = l;
	for (int i = l; i <= r; i++) {
		if (abs(x - the_nearest_value) > abs(x - i)) {
			the_nearest_value = i;
		}
	}
	cout << the_nearest_value;
	return 0;
}