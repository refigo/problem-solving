#include <bits/stdc++.h>
using namespace std;
int tc, c, v;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tc;
	while (tc--) {
		cin >> c >> v;
		cout << "You get " << (c / v)
			<< " piece(s) and your dad gets " << (c % v) 
			<< " piece(s).\n";
	}
	return 0;
}