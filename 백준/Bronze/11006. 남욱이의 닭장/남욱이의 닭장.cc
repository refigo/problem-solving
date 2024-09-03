#include <bits/stdc++.h>
using namespace std;
int t, n, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int chiken_one_leg = 2 * m - n;
		cout << chiken_one_leg << ' ' << m - chiken_one_leg << '\n';
	}
	return 0;
}