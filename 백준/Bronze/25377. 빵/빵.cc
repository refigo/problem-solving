#include <bits/stdc++.h>
using namespace std;
int n, a, b, ret = INT_MAX;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a <= b) {
			ret = min(ret, b);
		}
	}
	if (ret == INT_MAX) cout << -1;
	else cout << ret;
	return 0;
}