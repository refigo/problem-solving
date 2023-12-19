#include <bits/stdc++.h>
using namespace std;
int n, ret3, ret5, rmn;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	ret5 = n / 5;
	rmn = n % 5;
	if (rmn == 0) {
		cout << ret5 << "\n";
		return 0;
	}
	while (ret5 >= 0) {
		ret3 += rmn / 3;
		rmn = rmn % 3;
		if (rmn == 0)
			break ;
		rmn += 5;
		ret5--;
	}
	if (ret5 < 0) {
		cout << -1 << "\n";
	} else {
		cout << (ret5 + ret3) << "\n";
	}
	return 0;
}