#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			++cnt;
		}
	}
	cout << cnt;
	return 0;
}