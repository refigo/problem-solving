#include <bits/stdc++.h>
using namespace std;
int n, k;
set<int> divors_set;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divors_set.insert(i);
		}
	}
	if (divors_set.size() < k) {
		cout << 0;
		return 0;
	}
	auto it = divors_set.begin();
	advance(it, k - 1);
	cout << *it;
	return 0;
}