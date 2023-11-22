#include <bits/stdc++.h>
using namespace std;
int n;
int count_ws, count_star;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; ++j) {
				cout << "* ";
			}
		} else {
			for (int j = 0; j < n; ++j) {
				cout << " *";
			}
		}
		cout << '\n';
	}
	return 0;
}