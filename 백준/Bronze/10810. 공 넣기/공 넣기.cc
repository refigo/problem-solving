#include <bits/stdc++.h>
using namespace std;
int n, m;
int i, j, k;
int main() {
	cin >> n >> m;
	vector<int> v(n);
	while (m--){
		cin >> i >> j >> k;
		for (; i <= j; i++) {
			v[i - 1] = k;
		}
	}
	for (auto each : v) cout << each << ' ';
	cout << '\n';
	return 0;
}