#include <bits/stdc++.h>
using namespace std;
long long s1, s2, ta, ma;
int type;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s1 >> s2;
	while (s1--) {
		cin >> ta >> ma;
		if (type == 0 && ta != ma) {
			type = 1;
		}
	}
	while (s2--) {
		cin >> ta >> ma;
		if (type != 1 && ta != ma) {
			type = 2;
		}
	}
	if (type == 0) {
		cout << "Accepted";
	}
	else if (type == 1) {
		cout << "Wrong Answer";
	}
	else {
		cout << "Why Wrong!!!";
	}
	return 0;
}