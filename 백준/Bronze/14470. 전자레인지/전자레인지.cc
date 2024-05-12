#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c >> d >> e;
	if (a <= 0) {
		ret += -a * c + d;
		a = 0;
	}
	ret += (b - a) * e;
	cout << ret;
	return 0;
}