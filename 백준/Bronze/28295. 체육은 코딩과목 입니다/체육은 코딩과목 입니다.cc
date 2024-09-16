#include <bits/stdc++.h>
using namespace std;
int tmp, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		ret += tmp;
	}
	ret %= 4;
	if (ret == 0) cout << "N";
	else if (ret == 1) cout << "E";
	else if (ret == 2) cout << "S";
	else cout << "W";
	return 0;
}