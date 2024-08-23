#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		getline(cin, s);
		if (s.empty()) {
			n++;
			continue;
		}
		if (s[0] >= 'a' && s[0] <= 'z') {
			s[0] = s[0] - 'a' + 'A';
		}
		cout << s << '\n';
	}
	return 0;
}