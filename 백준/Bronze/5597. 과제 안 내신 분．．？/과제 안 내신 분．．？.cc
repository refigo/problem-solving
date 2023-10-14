#include <bits/stdc++.h>
using namespace std;
int a[34];
int tmp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 28; i++) {
		cin >> tmp;
		a[tmp] = 1;
	}
	for (int i = 1; i < 31; i++) {
		if (a[i] == 0) {
			cout << i << '\n';
		}
	}
	return 0;
}