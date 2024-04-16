#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		getline(cin, s);
		if (cin.eof()) break;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'i') cout << 'e';
			else if (s[i] == 'e') cout << 'i';
			else if (s[i] == 'I') cout << 'E';
			else if (s[i] == 'E') cout << 'I';
			else cout << s[i];
		}
		cout << '\n';		
	}
	return 0;
}