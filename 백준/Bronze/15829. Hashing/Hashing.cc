#include <bits/stdc++.h>
using namespace std;
int n;
string s;
long long ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) {
		ret += (s[i] - 'a' + 1) * pow(31, i);
		ret %= 1234567891;
	}
	cout << ret << '\n';
	return 0;
}