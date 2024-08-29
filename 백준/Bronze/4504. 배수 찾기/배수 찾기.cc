#include <bits/stdc++.h>
using namespace std;
int n, num;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (1) {
		cin >> num;
		if (num == 0) break;
		if (num % n == 0) cout << num << " is a multiple of " << n << ".\n";
		else cout << num << " is NOT a multiple of " << n << ".\n";
	}
	return 0;
}