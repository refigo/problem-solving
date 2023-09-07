#include <bits/stdc++.h>
using namespace std;

string name;
int as[26];
int odd_cnt;
string ans;
int half;
int odd_idx;

int main() {
	cin >> name;
	for (auto each : name) {
		as[(int)each - 'A'] += 1;
	}
	for (int idx = 0; idx < 26; ++idx) {
		if (as[idx] % 2 == 1) {
			odd_cnt += 1;
			odd_idx = idx;
			if (odd_cnt > 1) {
				cout << "I'm Sorry Hansoo" << endl;
				exit(0);
			}
		}
		half = as[idx] / 2;
		for (int cnt = 0; cnt < half; ++cnt)
			ans += 'A' + idx;
		as[idx] -= half;
	}
	if (odd_cnt == 1) {
		ans += 'A' + odd_idx;
		--as[odd_idx];
	}
	for (int ridx = 25; ridx >= 0; --ridx) {
		for (int cnt = 0; cnt < as[ridx]; ++cnt)
			ans += 'A' + ridx;
		as[ridx] = 0;
	}
	cout << ans << '\n';
	return 0;
}
