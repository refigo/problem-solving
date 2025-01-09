#include <bits/stdc++.h>
using namespace std;
int q;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> q;
	int each = 0;
	while (q--) {
		cin >> each;
		cout << int((each & -each) == each) << '\n';
	}
	return 0;
}