#include <bits/stdc++.h>
using namespace std;
int n, w, h;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> w >> h;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x <= w || x <= h || x <= sqrt(w * w + h * h)) cout << "DA\n";
		else cout << "NE\n";
	}
	return 0;
}