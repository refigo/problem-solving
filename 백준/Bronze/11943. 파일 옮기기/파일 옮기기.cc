#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b;
	cin >> c >> d;
	cout << min(a + d, b + c) << '\n';
	return 0;
}