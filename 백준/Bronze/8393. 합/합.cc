#include <bits/stdc++.h>
using namespace std;
int n;
int ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i)
		ans += i;
	cout << ans << '\n';
	return 0;
}