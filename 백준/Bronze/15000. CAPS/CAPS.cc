#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		cout << (char)toupper(s[i]);
	}
	cout << '\n';
	return 0;
}