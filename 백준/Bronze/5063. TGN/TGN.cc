#include <bits/stdc++.h>
using namespace std;
int n, r, e, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> r >> e >> c;
		if (r < e - c) cout << "advertise\n";
		else if (r == e - c) cout << "does not matter\n";
		else cout << "do not advertise\n";
	}
	return 0;
}