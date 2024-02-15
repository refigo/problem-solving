#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[14];
int each, start_idx, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> each;
		a[i] = each;
		if (each <= k)
			start_idx = i;
	}
	for (int i = start_idx; i >= 0; i--) {
		ret += k / a[i];
		k %= a[i];
		if (k == 0)
			break;
	}
	cout << ret << '\n';
	return 0;
}