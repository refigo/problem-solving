#include <bits/stdc++.h>
using namespace std;
int n, num;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> num;
		if (num % 2 == 0) cout << num << " is even\n";
		else cout << num << " is odd\n";
	}
	return 0;
}