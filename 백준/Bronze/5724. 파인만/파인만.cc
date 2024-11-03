#include <bits/stdc++.h>
using namespace std;
long long n;
long long ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> n;
		if (n == 0) break;
		ret = 0;
		for (int i = 1; i <= n; i++) {
			ret += i * i;
		}
		cout << ret << '\n';
	}
	return 0;
}