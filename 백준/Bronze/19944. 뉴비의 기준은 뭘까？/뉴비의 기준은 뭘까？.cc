#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	if (m < 3) {
		cout << "NEWBIE!";
	} else if (m <= n) {
		cout << "OLDBIE!";
	} else {
		cout << "TLE!";
	}
	return 0;
}