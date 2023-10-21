#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		cin >> s;
		cout << s[0] << s[s.length() - 1] << endl;
	}
	return 0;
}