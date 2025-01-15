#include <bits/stdc++.h>
using namespace std;
long long n, a, d, g, ret_max = -1, tmp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> d >> g;
		tmp = a * (d + g);
		if (a == (d + g)) {
			tmp *= 2; 
		}
		ret_max = max(ret_max, tmp);
	}
	cout << ret_max;
	return 0;
}