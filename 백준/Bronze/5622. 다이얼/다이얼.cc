#include <bits/stdc++.h>
using namespace std;
int a[30];
int to_set;
string s;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 'A'; i < 'Z' + 1; i++) {
		if (i <= 'C') {
			to_set = 2;
		} else if (i <= 'F') {
			to_set = 3;
		} else if (i <= 'I') {
			to_set = 4;
		} else if (i <= 'L') {
			to_set = 5;
		} else if (i <= 'O') {
			to_set = 6;
		} else if (i <= 'S') {
			to_set = 7;
		} else if (i <= 'V') {
			to_set = 8;
		} else if (i <= 'Z') {
			to_set = 9;
		}
		a[i - 'A'] = to_set;
	}
	cin >> s;
	for (int i = 0; i < s.length(); i++){
		ret += a[s[i] - 'A'];
	}
	ret += s.length();
	cout << ret << "\n";
	return 0;
}