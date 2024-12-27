#include <bits/stdc++.h>
using namespace std;
int n, k;
int tmp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> tmp;
		float tmp2 = (float)tmp / 2;
		// to ceil
		if (tmp2 - (int)tmp2 > 0) {
			tmp2 = (int)tmp2 + 1;
		}
		n -= tmp2;
	}
	if (n <= 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}