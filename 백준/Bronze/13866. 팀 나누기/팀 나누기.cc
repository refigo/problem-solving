#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c >> d;
	cout << min (abs(a + b - (c + d)), min(abs(a + c - (b + d)), abs(a + d - (b + c))));
	return 0;
}