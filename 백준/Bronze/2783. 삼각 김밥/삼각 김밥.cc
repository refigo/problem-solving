#include <bits/stdc++.h>
using namespace std;
float x, y, price;
int n;
float xi, yi;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> x >> y;
	price = x / y * 1000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> xi >> yi;
		if (price > xi / yi * 1000) {
			price = xi / yi * 1000;
		}
	}
	cout << fixed << setprecision(2) << price;
	return 0;
}