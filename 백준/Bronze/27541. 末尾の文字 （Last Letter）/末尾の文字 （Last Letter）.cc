#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> s;
	if (s[n - 1] == 'G') {
		for (int i = 0; i < n - 1; i++) cout << s[i];
	} else {
		cout << s << 'G';
	}
	return 0;
}