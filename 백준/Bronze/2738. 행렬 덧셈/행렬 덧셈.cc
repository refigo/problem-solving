#include <bits/stdc++.h>
using namespace std;
int n, m;
int tmp;
int a[104][104];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmp;
			a[i][j] += tmp;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmp;
			a[i][j] += tmp;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}