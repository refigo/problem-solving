#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int max_len, other_len;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b >> c;
	max_len = max(a, max(b, c));
	other_len = a + b + c - max_len;
	if (max_len >= other_len) cout << other_len * 2 - 1;
	else cout << other_len + max_len;
	return 0;
}