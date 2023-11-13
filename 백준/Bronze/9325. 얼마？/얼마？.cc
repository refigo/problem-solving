#include <bits/stdc++.h>
using namespace std;
int tc, s, n, q, p;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tc;
	while (tc--) {
		cin >> s;
		cin >> n;
		while (n--) {
			cin >> q >> p;
			s += q * p;
		}
		cout << s << "\n";
	}
	return 0;
}