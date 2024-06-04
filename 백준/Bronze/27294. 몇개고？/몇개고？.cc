#include <bits/stdc++.h>
using namespace std;
int t, s;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> t >> s;
	if (s == 1 || (t <= 11 || 16 < t)) {
		cout << 280;
	}
	if ((11 < t && t <= 16) && s == 0) {
		cout << 320;
	}
	return 0;
}