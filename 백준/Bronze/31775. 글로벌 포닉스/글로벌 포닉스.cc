#include <bits/stdc++.h>
using namespace std;
string s[3];
bool flag[3];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s[0] >> s[1] >> s[2];
	// l, k, p
	for (int i = 0; i < 3; i++) {
		if (s[i][0] == 'l') {
			flag[0] = true;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (s[i][0] == 'k') {
			flag[1] = true;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (s[i][0] == 'p') {
			flag[2] = true;
		}
	}
	if (flag[0] && flag[1] && flag[2]) {
		cout << "GLOBAL";
	}
	else {
		cout << "PONIX";
	}
	return 0;
}