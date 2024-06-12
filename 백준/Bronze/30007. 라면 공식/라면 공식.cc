#include <bits/stdc++.h>
using namespace std;
int n, a, b, x;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> x;
		cout << a * (x - 1) + b << '\n';
	}
	return 0;
}