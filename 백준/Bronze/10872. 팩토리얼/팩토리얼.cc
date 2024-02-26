#include <bits/stdc++.h>
using namespace std;
int n;
long long ret = 1;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	cout << ret << '\n';
	return 0;
}