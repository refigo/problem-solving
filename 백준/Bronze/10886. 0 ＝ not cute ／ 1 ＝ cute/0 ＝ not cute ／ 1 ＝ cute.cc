#include <bits/stdc++.h>
using namespace std;
int n, cnt, opinion;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> opinion;
		if (opinion == 1) cnt++;
	}
	if (cnt > n / 2) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
	return 0;
}