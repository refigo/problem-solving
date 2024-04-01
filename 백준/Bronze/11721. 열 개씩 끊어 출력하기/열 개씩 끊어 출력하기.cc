#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s;
	for (int i = 1; i <= s.size(); i++) {
		cout << s[i - 1];
		if (i % 10 == 0) cout << '\n';
	}
	cout << '\n';
	return 0;
}