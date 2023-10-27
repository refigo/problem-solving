#include <bits/stdc++.h>
using namespace std;
string s;
int a['z' - 'a' + 4];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 'z' - 'a' + 4; i++) {
		a[i] = -1;
	}
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int pos = s[i] - 'a';
		if (a[pos] == -1) {
			a[pos] = i;
		}
	}
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	return 0;
}