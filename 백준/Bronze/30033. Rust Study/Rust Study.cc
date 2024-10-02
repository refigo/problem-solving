#include <bits/stdc++.h>
using namespace std;
int n;
int a[1004];
int b[1004];
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (b[i] >= a[i]) {
			ret++;
		}
	}
	cout << ret;
	return 0;
}