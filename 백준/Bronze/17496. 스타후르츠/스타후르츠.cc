#include <bits/stdc++.h>
using namespace std;
int n, t, c, p;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> t >> c >> p;
	cout << (n - 1) / t * c * p << '\n';
	return 0;
}