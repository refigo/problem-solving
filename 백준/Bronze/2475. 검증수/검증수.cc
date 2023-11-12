#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e;
int ans;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c >> d >> e;
	ans = (a * a + b * b + c * c + d * d + e * e) % 10;
	cout << ans << "\n";
	return 0;
}