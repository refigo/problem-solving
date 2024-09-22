#include <bits/stdc++.h>
using namespace std;
int n, u, l;
int cnt, bj;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> u >> l;
	if (n >= 1000) {
		++cnt;
		bj = 1;
	}
	if (u >= 8000 || l >= 260) ++cnt;
	if (cnt >= 2) cout << "Very Good\n";
	else {
		if (bj) cout << "Good\n";
		else cout << "Bad\n";
	}
	return 0;
}