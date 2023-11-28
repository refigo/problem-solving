#include <bits/stdc++.h>
using namespace std;
int sum, a, b;
int ret_max = -1;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 4; ++i) {
		cin >> a >> b;
		sum = sum - a + b;
		if (sum > ret_max)
			ret_max = sum;
	}
	cout << ret_max << "\n";
	return 0;
}