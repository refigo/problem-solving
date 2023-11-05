#include <bits/stdc++.h>
using namespace std;
string s;
int a['z' - 'a' + 4];
int max_cnt = -1;
int max_idx = -1;
int cnt_alp_max = 0;
int main() {
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		a[tolower(s[i]) - 'a'] += 1;
	}
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		if (a[i] > max_cnt) {
			max_cnt = a[i];
			max_idx = i;
		}
	}
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		if (a[i] == max_cnt) {
			++cnt_alp_max;
		}
	}
	if (cnt_alp_max == 1) {
		cout << (char)('A' + max_idx) << "\n";
	} else {
		cout << "?\n";
	}
	return 0;
}