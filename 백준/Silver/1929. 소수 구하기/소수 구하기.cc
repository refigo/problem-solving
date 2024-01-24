#include <bits/stdc++.h>
using namespace std;
int m, n;
int era[1000004];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m >> n;
	era[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (era[i]) continue;
		for (int j = 2*i; j <= n; j += i) {
			era[j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (!era[i]) cout << i << '\n';
	}
	return 0;
}