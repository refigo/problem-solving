#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (long long k = 1; k <= n; k++) {
		if (1 + k + pow(k, 2) == n) {
			cout << k;
			return 0;
		}
	}
	return 0;
}