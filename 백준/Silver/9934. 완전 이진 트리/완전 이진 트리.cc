#include <bits/stdc++.h>
using namespace std;
int k, pk;
int a[1030];
vector<int> vvi[14];
void go(int idx_start, int size, int level) {
	if (level > k) return ;
	if (size < 1) return ;
	if (idx_start >= pk || idx_start < 1) return ;
	vvi[level].push_back(a[idx_start + (size / 2)]);
	go(idx_start, size / 2, level + 1);
	go(idx_start + (size / 2) + 1, size / 2, level + 1);
}
int main() {
	cin.tie(0); cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> k;
	pk = pow(2, k);
	for (int i = 1; i < pk; i++) {
		cin >> a[i];
	}	
	go(1, pk - 1, 1);

	for (int i = 1; i <= k; i++) {
		for (auto each : vvi[i]) {
			cout << each << ' ';
		}
		cout << '\n';
	}
	return 0;
}