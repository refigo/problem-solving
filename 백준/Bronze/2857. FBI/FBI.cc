#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 5; i++) {
		cin >> s;
		if (s.find("FBI") != string::npos) {
			cnt++;
			cout << (i + 1) << ' ';
		}
	}
	if (!cnt) cout << "HE GOT AWAY!\n";
	return 0;
}