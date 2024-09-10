#include <bits/stdc++.h>
using namespace std;
int n, each, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> each;
		if (each != i) {
			ret++;
		}
	}
	cout << ret;
	return 0;
}