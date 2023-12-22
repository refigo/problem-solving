#include <bits/stdc++.h>
using namespace std;
int n, cur, tmp, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tmp = i;
		cur = tmp;
		while (tmp > 0) {
			cur += tmp % 10;
			tmp /= 10;
		}
		if (cur == n) {
			ret = i;
			break ;
		}
	}
	cout << ret << "\n";
	return 0;
}