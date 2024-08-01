#include <bits/stdc++.h>
using namespace std;
int n_bread, n_paties;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n_bread >> n_paties;
	cout << min(n_bread / 2, n_paties) << '\n';
	return 0;
}