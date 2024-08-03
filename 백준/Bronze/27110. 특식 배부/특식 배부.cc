#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> a >> b >> c;
	cout << min(n, a) + min(n, b) + min(n, c) << '\n';
	return 0;
}