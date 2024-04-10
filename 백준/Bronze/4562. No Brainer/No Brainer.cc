#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a >= b) {
			cout << "MMM BRAINS\n";
		} else {
			cout << "NO BRAINS\n";
		}
	}
	return 0;
}