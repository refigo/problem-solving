#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b >> c;
	cout << a + b - c << '\n';
	string sa = to_string(a), sb = to_string(b);
	string sab = sa + sb;
	int ab = stoi(sab);
	cout << ab - c << '\n';
	return 0;
}