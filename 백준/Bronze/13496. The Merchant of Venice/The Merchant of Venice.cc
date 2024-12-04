#include <bits/stdc++.h>
using namespace std;
int k, n, s, d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> k;
	for (int i = 1; i <= k; i++) {
		cin >> n >> s >> d;
		int sd = s * d;
		int total_repay = 0;
		for (int j = 0; j < n; j++) {
			int d = 0, v = 0;
			cin >> d >> v;
			if (sd >= d) {
				total_repay += v;
			}
		}
		cout << "Data Set " << i << ":\n";
		cout << total_repay << "\n\n";
	}
	return 0;
}