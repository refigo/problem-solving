#include <bits/stdc++.h>
using namespace std;
int n, tmp, num_max;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		num_max = max(num_max, tmp);
	}
	cout << num_max;
	return 0;
}