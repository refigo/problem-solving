#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a') {
			cout << '4';
		}
		else if (s[i] == 'e') {
			cout << '3';
		}
		else if (s[i] == 'i') {
			cout << '1';
		}
		else if (s[i] == 'o') {
			cout << '0';
		}
		else if (s[i] == 's') {
			cout << '5';
		}
		else {
			cout << s[i];
		}
	}
	return 0;
}