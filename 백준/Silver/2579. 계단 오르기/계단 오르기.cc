#include <bits/stdc++.h>
using namespace std;
int n;
int a[304], dp[304];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	dp[0] = a[0];
	dp[1] = a[1] + a[0];
	dp[2] = max(a[2] + dp[0], a[2] + a[1]);
	for (int i = 3; i < n; i++) {
		dp[i] = max(a[i] + a[i - 1] + dp[i - 3], a[i] + dp[i - 2]);
	}
	cout << dp[n - 1] << '\n';
	return 0;
}