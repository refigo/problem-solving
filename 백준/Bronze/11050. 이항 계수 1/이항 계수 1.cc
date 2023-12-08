#include <bits/stdc++.h>
using namespace std;
int n, k;
int go(int n) {
	int ret = 1;
	for (int i = 2; i <= n; ++i) {
		ret *= i;
	}
	return ret;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	cout << go(n) / (go(k) * go(n - k)) << "\n";
	return 0;
}