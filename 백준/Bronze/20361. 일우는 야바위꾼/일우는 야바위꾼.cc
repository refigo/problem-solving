#include <bits/stdc++.h>
using namespace std;
int n, x, k, a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> x >> k;
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		if (a == x) x = b;
		else if (b == x) x = a;
	}
	cout << x;
	return 0;
}