#include <bits/stdc++.h>
using namespace std;
int a[3];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if (a[0] + a[1] == a[2]) {
		cout << 1;
	} else if (a[0] * a[1] == a[2]) {
		cout << 2;
	} else {
		cout << 3;
	}
	return 0;
}