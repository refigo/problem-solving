#include <bits/stdc++.h>
using namespace std;
int h, m, ot;
int main() {
	cin >> h >> m;
	cin >> ot;
	m += ot;
	h += m / 60;
	m %= 60;
	while (h >= 24)
		h = h - 24;
	cout << h << ' ' << m << '\n';
	return 0;
}