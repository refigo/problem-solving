#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> k;
		for (int i = 0; i < k; i++) {
			cout << "=";
		}
		cout << "\n";
	}
	return 0;
}