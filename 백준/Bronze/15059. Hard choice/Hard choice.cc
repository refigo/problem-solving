#include <bits/stdc++.h>
using namespace std;
int ca, ba, pa;
int cr, br, pr;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> ca >> ba >> pa;
	cin >> cr >> br >> pr;
	int ans = 0;
	if (cr > ca) ans += cr - ca;
	if (br > ba) ans += br - ba;
	if (pr > pa) ans += pr - pa;
	cout << ans << endl;
	return 0;
}