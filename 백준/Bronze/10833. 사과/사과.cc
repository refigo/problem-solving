#include <bits/stdc++.h>
using namespace std;
int n;
int s, a;
int ans;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> s >> a;
		ans += a % s;
	}
	cout << ans << "\n";
	return 0;
}
