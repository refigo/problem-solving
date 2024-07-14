#include <bits/stdc++.h>
using namespace std;
int a[5];
int sum_max;
int num_max;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 5; i++) {
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += a[j];
		}
		if (sum > sum_max) {
			sum_max = sum;
			num_max = i + 1;
		}
	}
	cout << num_max << ' ' << sum_max;
	return 0;
}