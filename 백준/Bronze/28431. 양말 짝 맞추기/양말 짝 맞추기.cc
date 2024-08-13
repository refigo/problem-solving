#include <bits/stdc++.h>
using namespace std;
int a[10];
int tmp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		a[tmp]++;
		if (a[tmp] == 2) {
			a[tmp] = 0;
		}
	}
	for (int i = 0; i <= 9; i++) {
		if (a[i] == 1) {
			cout << i;
			break;
		}
	}
	return 0;
}