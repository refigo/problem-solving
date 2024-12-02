#include <bits/stdc++.h>
using namespace std;
int n, d, ret;
int a[34];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ret += a[i];
	}
	int each = d / ret;
	for (int i = 0; i < n; i++) {
		cout << each * a[i] << '\n';
	}
	return 0;
}