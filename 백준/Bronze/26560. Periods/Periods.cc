#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		cout << s;
		if (s[s.size() - 1] != '.') {
			cout << '.';
		}
		cout << '\n';
	}
	return 0;
}