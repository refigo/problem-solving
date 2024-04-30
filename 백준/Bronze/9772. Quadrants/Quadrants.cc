#include <bits/stdc++.h>
using namespace std;
float x, y;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> x >> y;
		if (x == 0 || y == 0) {
			cout << "AXIS\n";
			if (x == 0 && y == 0) break;
			continue;
		}
		if (x > 0 && y > 0) cout << "Q1\n";
		else if (x < 0 && y > 0) cout << "Q2\n";
		else if (x < 0 && y < 0) cout << "Q3\n";
		else cout << "Q4\n";
	}
	return 0;
}