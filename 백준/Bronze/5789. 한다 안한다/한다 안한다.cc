#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> s;
		if (s[s.size() / 2] == s[s.size() / 2 - 1]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}
	return 0;
}