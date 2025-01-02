#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'E') {
			cout << "I";
		} else if (s[i] == 'I') {
			cout << "E";
		} else if (s[i] == 'S') {
			cout << "N";
		} else if (s[i] == 'N') {
			cout << "S";
		} else if (s[i] == 'T') {
			cout << "F";
		} else if (s[i] == 'F') {
			cout << "T";
		} else if (s[i] == 'J') {
			cout << "P";
		} else if (s[i] == 'P') {
			cout << "J";
		}
	}
	return 0;
}