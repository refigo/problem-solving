#include <bits/stdc++.h>
using namespace std;
int n;
int charge_youngsik, charge_minsik;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		int a = 0;
		cin >> a;
		charge_youngsik += ((a / 30) + 1) * 10;
		charge_minsik += ((a / 60) + 1) * 15;
	}
	if (charge_youngsik < charge_minsik) cout << "Y " << charge_youngsik;
	else if (charge_youngsik > charge_minsik) cout << "M " << charge_minsik;
	else cout << "Y M " << charge_youngsik;
	return 0;
}