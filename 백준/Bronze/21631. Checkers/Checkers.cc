#include <bits/stdc++.h>
using namespace std;
long long a, b, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	if (a >= b) {
		ret = b;
	} else {
		ret = a + 1;
	}
	cout << ret << '\n';
	return 0;
}