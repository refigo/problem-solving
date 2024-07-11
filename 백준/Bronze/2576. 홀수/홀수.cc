#include <bits/stdc++.h>
using namespace std;
int num;
vector<int> odd_nums;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			odd_nums.push_back(num);
		}
	}
	if (odd_nums.size() == 0) {
		cout << -1;
	}
	else {
		int sum = 0;
		int min = odd_nums[0];
		for (int i = 0; i < odd_nums.size(); i++) {
			sum += odd_nums[i];
			if (min > odd_nums[i]) {
				min = odd_nums[i];
			}
		}
		cout << sum << '\n' << min;
	}
	return 0;
}