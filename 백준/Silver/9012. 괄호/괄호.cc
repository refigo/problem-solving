#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int lc;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		cin >> s;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '(') {
				++lc;
			} else {
				--lc;
			}
			if (lc < 0) {
				break ;
			}
		}
		if (lc == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		lc = 0;
	}
	return 0;
}