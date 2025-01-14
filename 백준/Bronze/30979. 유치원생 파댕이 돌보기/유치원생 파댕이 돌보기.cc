#include <bits/stdc++.h>
using namespace std;
int t, n, candy;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t >> n;
	while (n--) {
		cin >> candy;
		t -= candy;
	}
	if (t <= 0) cout << "Padaeng_i Happy\n";
	else cout << "Padaeng_i Cry\n";
	return 0;
}