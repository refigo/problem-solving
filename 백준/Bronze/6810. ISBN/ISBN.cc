#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	cout << "The 1-3-sum is ";
	cout << 91 + a + b * 3 + c << '\n';
	return 0;
}