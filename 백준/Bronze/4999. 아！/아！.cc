#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s1;
	cin >> s2;
	if (s1.size() >= s2.size()) {
		cout << "go\n";
	} else {
		cout << "no\n";
	}
	return 0;
}