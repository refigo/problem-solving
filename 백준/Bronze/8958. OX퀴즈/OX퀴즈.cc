#include <bits/stdc++.h>
using namespace std;
int tc, st, ret;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tc;
	while (tc--) {
		cin >> s;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == 'O') {
				++st;
			} else {
				st = 0;
			}
			ret += st;
		}
		cout << ret << '\n';
		ret = 0;
		st = 0;
	}
	return 0;
}