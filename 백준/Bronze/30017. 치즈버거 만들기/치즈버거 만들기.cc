#include <bits/stdc++.h>
using namespace std;
int a, b, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	if (a >= b + 1) {
		ret = 2 * b + 1;
	}
	if (a < b + 1) {
		ret = 2 * a - 1;
	}
	cout << ret;
	return 0;
}