#include <bits/stdc++.h>
using namespace std;
int ret;
char pre_operator;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int idx = 0;
	while (1) {
		if (idx % 2 == 0) {
			int num;
			cin >> num;
			if (idx == 0) {
				ret = num;
			}
			else {
				if (pre_operator == '+') {
					ret += num;
				}
				else if (pre_operator == '-') {
					ret -= num;
				}
				else if (pre_operator == '*') {
					ret *= num;
				}
				else if (pre_operator == '/') {
					ret /= num;
				}
			}
			idx++;
		}
		else {
			char c;
			cin >> c;
			if (c == '=') {
				cout << ret << '\n';
				break;
			}
			else {
				pre_operator = c;
				idx++;
			}
		}
	}
	return 0;
}