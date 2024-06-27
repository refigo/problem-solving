#include <bits/stdc++.h>
using namespace std;
int a[4];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	cout << a[1];
	return 0;
}