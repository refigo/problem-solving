#include <bits/stdc++.h>
using namespace std;
int d, h, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> d >> h >> m;
	int t = (d - 11) * 24 * 60 + (h - 11) * 60 + (m - 11);
	if (t < 0) {
		cout << -1;
	}
	else {
		cout << t;
	}
	return 0;
}