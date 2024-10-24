#include <bits/stdc++.h>
using namespace std;
int n, k;
string s[104];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	cin >> k;
	if (k == 1) {
		for (int i = 0; i < n; i++) cout << s[i] << '\n';
	}
	else if (k == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = s[i].size() - 1; j >= 0; j--) cout << s[i][j];
			cout << '\n';
		}
	}
	else {
		for (int i = n - 1; i >= 0; i--) cout << s[i] << '\n';
	}
	return 0;
}