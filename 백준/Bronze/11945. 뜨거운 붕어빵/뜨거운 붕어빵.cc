#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0 ; i < n; i++) {
		cin >> s;
		for (int j = m - 1; j >= 0; j--) {
			cout << s[j];
		}
		cout << '\n';
	}
	return 0;
}