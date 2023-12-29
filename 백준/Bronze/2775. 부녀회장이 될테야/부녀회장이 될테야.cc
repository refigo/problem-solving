#include <bits/stdc++.h>
using namespace std;
int tc, k, n;
int go(int flr, int num) {
	int ret = 0;
	if (flr == 0) {
		return num;
	}
	for (int i = 1; i <= num; i++) {
		ret += go(flr - 1, i);
	}
	return ret;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tc;
	while (tc--) {
		cin >> k >> n;
		cout << go(k, n) << "\n";
	}
	return 0;
}