#include <bits/stdc++.h>
using namespace std;
int t, a, b;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> s;
		int idx = s.find(',');
		// cout << "idx: " << idx << '\n';
		a = stoi(s.substr(0, idx));
		b = stoi(s.substr(idx + 1));
		cout << a + b << '\n';
	}
	return 0;
}