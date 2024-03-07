#include <bits/stdc++.h>
using namespace std;
string s;
float ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s;
	cout << setprecision(1) << fixed;
	char apb = s[0];
	if (apb == 'F') {
		cout << ret << '\n';
		return 0;
	}
	if (apb == 'A') {
		ret = 4.0;
	} else if (apb == 'B') {
		ret = 3;
	} else if (apb == 'C') {
		ret = 2;
	} else if (apb == 'D') {
		ret = 1;
	}
	char scnd = s[1];
	if (scnd == '+') {
		ret += 0.3;
	} else if (scnd == '-') {
		ret -= 0.3;
	}
	cout << ret << '\n';
	return 0;
}