#include <bits/stdc++.h>
using namespace std;
long long w1, h1, w2, h2;
long long ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> w1 >> h1 >> w2 >> h2;
	long long long_width = 0;
	if (w1 > w2) {
		long_width = w1;
	} else {
		long_width = w2;
	}
	ret = 2 * (h1 + h2) + 2 * long_width;
	ret += 4;
	cout << ret;
	return 0;
}