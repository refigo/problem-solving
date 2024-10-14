#include <bits/stdc++.h>
using namespace std;
int n;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int sum_nums = 0;
		int num = i;
		while (num) {
			sum_nums += num % 10;
			num /= 10;
		}
		if (i % sum_nums == 0)
			ret++;
	}
	cout << ret;
	return 0;
}