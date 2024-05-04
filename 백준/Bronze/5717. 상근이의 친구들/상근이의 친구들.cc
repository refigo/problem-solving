#include <bits/stdc++.h>
using namespace std;
int m, f;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> m >> f;
		if (m == 0 && f == 0) break;
		cout << m + f << '\n';
	}
	return 0;
}