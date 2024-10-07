#include <bits/stdc++.h>
using namespace std;
float pre = -15;
float cur;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> cur;
		if (pre < -10) {
			pre = cur;
		} else {
			if (cur == 999) {
				break;
			}
			cout << fixed << setprecision(2) << cur - pre << endl;
			pre = cur;
		}
	}
	return 0;
}