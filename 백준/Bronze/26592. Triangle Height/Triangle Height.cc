#include <bits/stdc++.h>
using namespace std;
int n;
double area, base;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> area >> base;
		cout << "The height of the triangle is ";
		cout << fixed << setprecision(2) << 2 * area / base << ' ' << "units" << '\n';
	}
	return 0;
}