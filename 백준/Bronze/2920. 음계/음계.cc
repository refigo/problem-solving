#include <bits/stdc++.h>
using namespace std;
int each, type, prv;

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> each;
	type = prv = each;
	for (int i = 1; i < 8; ++i) {
		cin >> each;
		if (type == 1) {
			if (prv != each - 1) {
				type = 0;
			}
		} else if (type == 8) {
			if (prv != each + 1) {
				type = 0;
			}
		} else {
			break ;
		}
		prv = each;
	}
	if (type == 1) {
		cout << "ascending";
	} else if (type == 8) {
		cout << "descending";
	} else {
		cout << "mixed";
	}
	cout << '\n';
	return 0;
}