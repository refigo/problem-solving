#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << 2 * a - b << '\n';
	}
	return 0;
}