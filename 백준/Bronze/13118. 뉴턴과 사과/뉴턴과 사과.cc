#include <bits/stdc++.h>
using namespace std;
long long p[4];
long long x, y, r;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> p[0] >> p[1] >> p[2] >> p[3];
	cin >> x >> y >> r;
	bool flag = false;
	for (int i = 0; i < 4; i++) {
		if (p[i] == x) {
			cout << i + 1 << ' ';
			flag = true;
			break;
		}
	}
	if (!flag) cout << 0;
	cout << '\n';
	return 0;
}