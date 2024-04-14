#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << ' ';
		if (i % 6 == 0 || i == n) cout << "Go! ";
	}
	return 0;
}