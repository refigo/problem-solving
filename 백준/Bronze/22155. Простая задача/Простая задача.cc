#include <bits/stdc++.h>
using namespace std;
int n, i, f;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> i >> f;
		if (i + f <= 3 && i < 3 && f < 3) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	return 0;
}