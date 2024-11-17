#include <bits/stdc++.h>
using namespace std;
int n, ret;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> s;
		if (s.find("01") != string::npos
		 || s.find("OI") != string::npos) {
			ret++;
		}
	}
	cout << ret;
	return 0;
}