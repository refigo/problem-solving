#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c >> d >> e;
	cout << min(a, min(b, c)) + min(d, e) - 50 << '\n';
	return 0;
}