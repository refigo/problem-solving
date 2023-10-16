#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[104];
int i, j;
int tmp;

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int k = 1; k <= n; k++){
		a[k] = k;
	}
	while (m--) {
		cin >> i >> j;
		for (;i < j; i++, j--) {
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	for (int k = 1; k <= n; k++){
		cout << a[k] << ' ';
	}
	cout << '\n';
	return 0;
}