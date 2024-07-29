#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	cout << min(n/2, m/2) << '\n';
	return 0;
}