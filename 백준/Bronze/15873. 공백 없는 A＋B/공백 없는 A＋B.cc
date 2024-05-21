#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s;
	if (s.size() > 2) {
		int pos_10 = s.find("10");
		if (pos_10 > 0) {
			cout << atoi(&s.substr(0, pos_10)[0]) + atoi(&s.substr(pos_10)[0]) << '\n';
		} else {
			cout << atoi(&s.substr(0, 2)[0]) + atoi(&s[2]) << '\n';
		}

	} else {
		cout << atoi(&s.substr(0, 1)[0]) + atoi(&s[1]) << '\n';
	}
	return 0;
}