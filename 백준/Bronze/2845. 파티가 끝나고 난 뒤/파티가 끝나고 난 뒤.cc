#include <bits/stdc++.h>
using namespace std;
int l, p, pred, other;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> l >> p;
	pred = l * p;
	for (int i = 0; i < 5; i++) {
		cin >> other;
		cout << other - pred << ' ';
	}
	return 0;
}