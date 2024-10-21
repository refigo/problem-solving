#include <bits/stdc++.h>
using namespace std;
int p, q;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> p >> q;
	if (p <= 50 && q <= 10) cout << "White";
	else if (q > 30) cout << "Red";
	else cout << "Yellow";
	return 0;
}