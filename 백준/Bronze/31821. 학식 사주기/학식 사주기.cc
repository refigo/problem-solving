#include <bits/stdc++.h>
using namespace std;
int a[10004];
int n, m, b, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> b;
		ret += a[b];
	}
	cout << ret;
	return 0;
}