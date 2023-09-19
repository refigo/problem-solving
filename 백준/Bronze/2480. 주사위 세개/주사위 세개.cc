#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int ans;
int main() {
	cin >> a >> b >> c;
	if (a == b && a == c) {
		ans = 10000 + a * 1000;
	} else if (a != b && b != c && a != c) {
		int max = 0;
		if (a > b && a > c) {
			max = a;
		} else if (b > a && b > c){
			max = b;
		} else {
			max = c;
		}
		ans = max * 100;
	} else {
		int twin = 0;
		if (a == b || a == c) {
			twin = a;
		} else if (b == c) {
			twin = b;
		}
		ans = 1000 + twin * 100;
	}
	cout << ans << '\n';
	return 0;
}