#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		getline(cin, s);
		if (s == "END") break ;
		for (int i = s.size() - 1; i >= 0; i--) {
			cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}