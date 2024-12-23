#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		getline(cin, s);
		if (s == "***") break;
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}
	return 0;
}