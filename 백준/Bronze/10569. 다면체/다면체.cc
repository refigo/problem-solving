#include <bits/stdc++.h>
using namespace std;
int t, vertex, edge;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> vertex >> edge;
		cout << 2 - vertex + edge << '\n';
	}
	return 0;
}