#include <bits/stdc++.h>
using namespace std;
int x, y, w, h;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> x >> y >> w >> h;
	cout << min(min(x, y), min(w - x, h - y)) << '\n';
	return 0;
}