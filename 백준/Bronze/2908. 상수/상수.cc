#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int n1, n2;

int get_ten_squre(int n) {
	int ret = 1;
	while (n--) {
		ret *= 10;
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> s1 >> s2;
	for (int i = 0; i < 3; i++) {
		n1 += get_ten_squre(2 - i) * (s1[2 - i] - '0');
		n2 += get_ten_squre(2 - i) * (s2[2 - i] - '0');
	}
	cout << max(n1, n2) << "\n";
	return 0;
}