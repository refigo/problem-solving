#include <bits/stdc++.h>
using namespace std;
int n, price;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> price;
	n--;
	int var = 0;
	while (n--) {
		cin >> var;
		price += var;
	}
	cout << price;
	return 0;
}