#include <bits/stdc++.h>
using namespace std;
int t;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> s;
		bool flag_done = false;
		int cnt = 0;
		for (char c : s) {
			if (flag_done) continue;
			if (c == 'D') flag_done = true;
			else cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}