#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> s;
		if (atoi(s.substr(2).c_str()) <= 90)
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}