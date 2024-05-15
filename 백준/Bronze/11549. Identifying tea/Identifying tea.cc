#include <bits/stdc++.h>
using namespace std;
int t, a, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (a == t) ret++;
	}
	cout << ret;
	return 0;
}