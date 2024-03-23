#include <bits/stdc++.h>
using namespace std;
int n;
int a[19];
bool verify(int y) {
	for (int i = y - 1; i >= 0; i--) {
		if (a[y] == a[i] 
		|| abs(y - i) == abs(a[y] - a[i])) {
			return false;
		}
	}
	return true;
}
int queen(int y){
	if (y == n) {
		return 1;
	}
	int ret = 0;
	for (int x = 0; x < n; x++) {
		a[y] = x;
		if (verify(y)) {
			ret += queen(y + 1);
		}
	}
	return ret;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cout << queen(0) << '\n';
	return 0;
}