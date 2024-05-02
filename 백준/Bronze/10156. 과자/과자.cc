#include <bits/stdc++.h>
using namespace std;
int k, n, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> k >> n >> m;
	cout << max(0, k * n - m) << '\n';
	return 0;
}