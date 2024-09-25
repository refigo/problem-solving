#include <bits/stdc++.h>
using namespace std;
int wc, hc, arg_ws, hs;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> wc >> hc >> arg_ws >> hs;
	if (wc - arg_ws >= 2 && hc - hs >= 2) cout << 1;
	else cout << 0;
	return 0;
}