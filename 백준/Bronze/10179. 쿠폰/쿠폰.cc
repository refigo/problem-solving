#include <bits/stdc++.h>
using namespace std;
int t;
double price;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> price;
		price = price * 0.8;
		cout << fixed << setprecision(2) << '$' << price << '\n';
	}
	return 0;
}