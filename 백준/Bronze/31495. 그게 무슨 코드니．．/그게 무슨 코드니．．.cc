#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	getline(cin, s);
	if (s[0] == '\"' && s[s.size() - 1] == '\"' && s.size() > 2) {
		for (int i = 1; i < s.size() - 1; i++) {
			cout << s[i];
		}
	} else {
		cout << "CE";
	}
	return 0;
}