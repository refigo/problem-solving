#include <bits/stdc++.h>
using namespace std;
int n;
int count_ws, count_star;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		count_ws = i;
		while (count_ws--) {
			cout << ' ';
		}
		count_star = 2 * (n - i) - 1;
		while (count_star--) {
			cout << '*';
		}
		cout << '\n';
	}
	for (int i = n - 2; i >= 0; --i) {
		count_ws = i;
		while (count_ws--) {
			cout << ' ';
		}
		count_star = 2 * (n - i) - 1;
		while (count_star--) {
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}