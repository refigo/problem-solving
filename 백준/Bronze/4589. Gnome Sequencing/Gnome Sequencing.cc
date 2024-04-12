#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cout << "Gnomes:\n";
	while (n--) {
		cin >> a >> b >> c;
		if ((a > b && b > c) || (c > b && b > a)) cout << "Ordered\n";
		else cout << "Unordered\n";
	}
	return 0;
}