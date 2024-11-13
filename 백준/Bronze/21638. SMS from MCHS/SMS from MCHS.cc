#include <bits/stdc++.h>
using namespace std;
int t1, v1, t2, v2;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t1 >> v1 >> t2 >> v2;
	if (t2 < 0 && v2 >= 10) {
		cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
	} else if (t2 < t1) {
		cout << "MCHS warns! Low temperature is expected tomorrow.";
	} else if (v2 > v1) {
		cout << "MCHS warns! Strong wind is expected tomorrow.";
	} else {
		cout << "No message";
	}
	return 0;
}
