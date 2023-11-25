#include <bits/stdc++.h>
using namespace std;
int n, each;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			cout << ' ';
		}
		for (int j = 0; j < i; ++j) {
			cout << '*';
			cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}