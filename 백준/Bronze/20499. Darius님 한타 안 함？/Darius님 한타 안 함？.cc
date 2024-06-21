#include <bits/stdc++.h>
using namespace std;
string s;
int k, d, a;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	string s;
	cin >> s;
	int i = 0;
	while (s[i] != '/') {
		k = k * 10 + s[i] - '0';
		i++;
	}
	i++;
	while (s[i] != '/') {
		d = d * 10 + s[i] - '0';
		i++;
	}
	i++;
	while (i < s.size()) {
		a = a * 10 + s[i] - '0';
		i++;
	}
	// cout << k << ' ' << d << ' ' << a << '\n';
	if (k + a < d || d == 0)
		cout << "hasu";
	else
		cout << "gosu";
	cout << '\n';
	return 0;
}