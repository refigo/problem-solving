#include <bits/stdc++.h>
using namespace std;
int n;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			ret += i;
		}
	}
	cout << ret * 5 - 24;
	return 0;
}