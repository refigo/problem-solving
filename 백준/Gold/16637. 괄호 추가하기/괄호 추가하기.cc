#include <bits/stdc++.h>
using namespace std;
int n, ret = INT_MIN;
string s;
vector<int> nums;
vector<char> opers;
int calc(char oper, int num1, int num2) {
	if (oper == '-') {
		return (num1 - num2);
	}
	if (oper == '+') {
		return (num1 + num2);
	}
	if (oper == '*') {
		return (num1 * num2);
	}
	return 0;
}
void go(int cur_idx, int left_val) {
	if (cur_idx >= nums.size() - 1) {
		ret = max(left_val, ret);
		return ;
	}
	go(cur_idx + 1, calc(opers[cur_idx], left_val, nums[cur_idx + 1]));
	if (cur_idx + 2 <= nums.size() - 1) {
		int right_val = calc(opers[cur_idx + 1], nums[cur_idx + 1], nums[cur_idx + 2]);
		go(cur_idx + 2, calc(opers[cur_idx], left_val, right_val));
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 0) {
			nums.push_back(s[i] - '0');
		} else {
			opers.push_back(s[i]);
		}
	}
	go(0, nums[0]);
	cout << ret << '\n';
	return 0;
}