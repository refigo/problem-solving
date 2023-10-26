#include "bits/stdc++.h"
using namespace std;
int main() {
	vector<int> ret_cnts;
	int 		cnt_test_case;
	int 		input_num;
	int 		cnt_zero;

	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> cnt_test_case;
	while (cnt_test_case--) {
		cin >> input_num;
		cnt_zero = 0;
		for (int i = 5; i <= input_num; i *= 5) {
			cnt_zero += (input_num / i);
		}
		ret_cnts.push_back(cnt_zero);
	}
	for (int each_cnt : ret_cnts) {
		cout << each_cnt << '\n';
	}
	return 0;
}