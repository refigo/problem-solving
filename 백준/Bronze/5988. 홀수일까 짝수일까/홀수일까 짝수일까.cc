#include <bits/stdc++.h>
using namespace std;
int n;
string num;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		int len = num.length();
		if (num[len - 1] % 2 == 0) cout << "even\n";
		else cout << "odd\n";
	}
	return 0;
}