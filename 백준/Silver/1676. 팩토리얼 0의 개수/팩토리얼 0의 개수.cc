#include <bits/stdc++.h>
using namespace std;
int n, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cout << (n / 5 + n / 25 + n / 125) << "\n";
	return 0;
}