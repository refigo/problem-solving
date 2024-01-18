#include <bits/stdc++.h>
using namespace std;
int n, m, ret = -1;
int a[104];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				tmp = a[i] + a[j] + a[k];
				if (tmp <= m) {
					ret = max(ret, tmp);
				}
			}
		}
	}
	cout << ret << '\n';
	return 0;
}