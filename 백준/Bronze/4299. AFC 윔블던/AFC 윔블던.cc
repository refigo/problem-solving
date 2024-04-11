#include <bits/stdc++.h>
using namespace std;
int sm, df, ret = 1001;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> sm >> df;
	for (int i = 0; i < 1001; i++) {
		if (2 * i + df == sm) {
			ret = i;
			break;
		}
	}
	if (ret == 1001) cout << "-1\n";
	else cout << (ret + df) << ' ' <<  ret << '\n';
	return 0;
}