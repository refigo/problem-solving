#include <bits/stdc++.h>
using namespace std;
int n, x, y;
set<pair<int, int>> sp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> x >> y;
		sp.insert({x, y});
	}
	for (auto there : sp) {
		cout << there.first << " " 
			 << there.second << "\n";
	}
	return 0;
}