#include <bits/stdc++.h>
using namespace std;
string s;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 8; i++) {
		cin >> s;
		for (char c : s) {
			if (c =='p') {
				ret -= 1;
			} else if (c == 'n' || c == 'b') {
				ret -= 3;
			} else if (c == 'r') {
				ret -= 5;
			} else if (c == 'q') {
				ret -= 9;
			} else if (c == 'P') {
				ret += 1;
			} else if (c == 'N' || c == 'B') {
				ret += 3;
			} else if (c == 'R') {
				ret += 5;
			} else if (c == 'Q') {
				ret += 9;
			}
		}
	}
	cout << ret;
	return 0;
}
