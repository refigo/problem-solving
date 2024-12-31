#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> s;
		if (s == "0") break;
		int ret = 0;
		int each_num = 0;
		for (int i = s.size(); i >= 1; i--) {
			each_num = s[s.size() - i] - '0';
			for (int j = i; j >= 1; j--) {
				each_num *= j;
			}
			ret += each_num;
		}
		cout << ret << '\n';
	}
	return 0;
}