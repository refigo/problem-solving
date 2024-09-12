#include <bits/stdc++.h>
using namespace std;
int n, t;
int a[54];
int total;
int cnt;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> t;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		total += a[i];
		if (total > t) {
			break;
		}
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}