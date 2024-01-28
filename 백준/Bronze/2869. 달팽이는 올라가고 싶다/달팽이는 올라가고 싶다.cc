#include <bits/stdc++.h>
using namespace std;
int a, b, v, day, h;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> v;
	day = (v - a) / (a - b);
	h = (a - b) * day;
	while (1) {
		++day;
		h += a;
		if (h >= v) {
			break;
		}
		h -= b;
	}
	cout << day << '\n';
	return 0;
}