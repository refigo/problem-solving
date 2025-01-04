#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		cout << min(c, d) - max(a, b) << ' ';
		cout << max(c, d) - min(a, b) << '\n';
	}
	return 0;
}