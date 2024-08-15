#include <bits/stdc++.h>
using namespace std;
int a['Z' - 'A' + 1];
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		a[s[i] - 'A']++;
	}
	string ans = "MOBIS";
	for (int i = 0; i < ans.size(); i++) {
		if (a[ans[i] - 'A'] == 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}