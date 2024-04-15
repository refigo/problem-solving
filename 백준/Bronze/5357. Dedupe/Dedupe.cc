#include <bits/stdc++.h>
using namespace std;
int n;
string s;
char prev_c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (i == 0) {
				prev_c = s[i];
				cout << s[i];
			}
			else {
				if (prev_c != s[i]) {
					prev_c = s[i];
					cout << s[i];
				}
			}
		}
		cout << '\n';
	}
	return 0;
}