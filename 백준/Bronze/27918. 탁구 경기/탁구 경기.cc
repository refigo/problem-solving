#include <bits/stdc++.h>
using namespace std;
int n, x, y;
char chr;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> chr;
		if (abs(x - y) >= 2) {
			continue;
		}
		if (chr == 'D') {
			++x;
		}
		else if (chr == 'P') {
			++y;
		}
	}
	cout << x << ":" <<  y << '\n';
	return 0;
}