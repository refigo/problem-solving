#include <bits/stdc++.h>
using namespace std;
int a, b, x, y, t;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> x >> b >> y;
	cin >> t;
	int ans = 0;
	ans = a;
	if (t > 30) {
		ans += (t - 30) * x * 21;
	}
	cout << ans << ' ';
	ans = b;
	if (t > 45) {
		ans += (t - 45) * y * 21;
	}
	cout << ans << ' ';
	return 0;
}