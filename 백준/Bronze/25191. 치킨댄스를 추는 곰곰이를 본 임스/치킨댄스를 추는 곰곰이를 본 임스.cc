#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> a >> b;
	cout << min((a / 2 + b), n);
	return 0;
}