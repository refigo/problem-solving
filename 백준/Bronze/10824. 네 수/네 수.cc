#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
string a_str, b_str, c_str, d_str;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b >> c >> d;
	a_str = to_string(a);
	b_str = to_string(b);
	c_str = to_string(c);
	d_str = to_string(d);
	cout << stoll(a_str + b_str) + stoll(c_str + d_str);
	return 0;
}