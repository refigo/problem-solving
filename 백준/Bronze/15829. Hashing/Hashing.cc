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
		long long tmp = 1;
		for (int j = 0; j < i; j++) {
			tmp *= 31;
			tmp %= 1234567891;
		}
		ret += (s[i] - 'a' + 1) * tmp;
		ret %= 1234567891;
	}
	cout << ret << '\n';
	return 0;
}