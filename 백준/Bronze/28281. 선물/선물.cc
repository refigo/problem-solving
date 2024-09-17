#include <bits/stdc++.h>
using namespace std;
int n, x, socks[100000];
int min_cost = 987654321;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> socks[i];
		if (i > 0) {
			min_cost = min(min_cost, socks[i - 1] + socks[i]);
		}
	}
	cout << min_cost * x;
	return 0;
}