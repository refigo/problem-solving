#include <bits/stdc++.h>
using namespace std;
int n, each;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < 5; ++i) {
		cin >> each;
		if (each == n) {
			++ret;
		}
	}
	cout << ret << '\n';
	return 0;
}