#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		cout << (i + 1) << ". " << s << '\n';
	}
	return 0;
}