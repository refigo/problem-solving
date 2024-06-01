#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	if (n <= 1) {
		cout << 1;
		return 0;
	}
	for (int i = n - 1; i > 1; i--) {
		n *= i;
	}
	cout << n;
	return 0;
}