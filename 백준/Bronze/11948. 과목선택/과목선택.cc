#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c >> d >> e >> f;
	ret = a + b + c + d - min(a, min(b, min(c, d))) + max(e, f);
	cout << ret << '\n';
	return 0;
}