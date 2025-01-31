#include <bits/stdc++.h>
using namespace std;
int n;
long double c, sum_a;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		sum_a += pow(c, 3);
	}
	cout << fixed << setprecision(6);
	cout << cbrt(sum_a);
	return 0;
}