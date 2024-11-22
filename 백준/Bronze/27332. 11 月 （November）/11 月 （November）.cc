#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	c = a + b * 7;
	if (c > 30) {
		cout << 0;
	} else {
		cout << 1;
	}
	return 0;
}