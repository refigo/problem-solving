#include <bits/stdc++.h>
using namespace std;
string n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> n;
		if (n == "0") break;
		int digital_root = 0;
		for (int i = 0; i < n.size(); i++) {
			digital_root += n[i] - '0';
			if (digital_root >= 10) {
				digital_root = digital_root / 10 + digital_root % 10;
			}
		}
		cout << digital_root << '\n';
	}
	return 0;
}