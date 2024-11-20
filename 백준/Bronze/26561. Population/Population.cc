#include <bits/stdc++.h>
using namespace std;
int n, p, t;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> p >> t;
		p -= (t / 7);
		p += (t / 4);
		cout << p << '\n';
	}
	return 0;
}