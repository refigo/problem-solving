#include <bits/stdc++.h>
using namespace std;
int n;
int a[9];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
		sort(a, a + 5);
		cout << "Case #" << i << ": " << a[4] << '\n';
	}
	return 0;
}