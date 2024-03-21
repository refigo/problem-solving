#include <bits/stdc++.h>
using namespace std;
string s;
char each;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		getline(cin, s);
		if (s == "#") break;
		ret = 0;
		for (int i = 0; i < s.size(); i++) {
			each = tolower(s[i]);
			if (each == 'a' || each == 'e' || each == 'i'
			|| each == 'o' || each == 'u') {
				ret++;
			}
		}
		cout << ret << '\n';
	}
	return 0;
}