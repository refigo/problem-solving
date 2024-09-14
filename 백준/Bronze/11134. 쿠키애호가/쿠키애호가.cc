#include <bits/stdc++.h>
using namespace std;
long long t, n, c, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n >> c;
		ret = n / c;
		if (n % c) ret++;
		cout << ret << '\n';
	}
	return 0;
}