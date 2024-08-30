#include <bits/stdc++.h>
using namespace std;
int n, s, m, l, xl, xxl, xxxl, t, p;
int tshirt_count, pen_count, pen_each_count;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> s >> m >> l >> xl >> xxl >> xxxl;
	cin >> t >> p;
	tshirt_count = (s / t) + (m / t) + (l / t) + (xl / t) + (xxl / t) + (xxxl / t);
	int tshirt_size_count[6] = { s, m, l, xl, xxl, xxxl };
	for (int i = 0; i < 6; i++) {
		if (tshirt_size_count[i] % t != 0) {
			tshirt_count++;
		}
	}
	pen_count = n / p;
	pen_each_count = n % p;
	cout << tshirt_count << "\n" << pen_count << " " << pen_each_count << "\n";
	return 0;
}