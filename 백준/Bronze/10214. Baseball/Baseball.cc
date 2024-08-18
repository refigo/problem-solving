#include <bits/stdc++.h>
using namespace std;
int t, y, k, y_sum, k_sum;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		for (int i = 0; i < 9; i++) {
			cin >> y >> k;
			y_sum += y;
			k_sum += k;
		}
		if (y_sum > k_sum) cout << "Yonsei\n";
		else if (y_sum < k_sum) cout << "Korea\n";
		else cout << "Draw\n";
		y_sum = 0;
		k_sum = 0;
	}
	return 0;
}