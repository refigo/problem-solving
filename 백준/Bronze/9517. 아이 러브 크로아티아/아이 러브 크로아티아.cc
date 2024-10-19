#include <bits/stdc++.h>
using namespace std;
int k, n, t;
char z;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> k;
	cin >> n;
	int cur_num = k;
	int total_time = 0;
	for (int i = 0; i < n; i++) {
		cin >> t >> z;
		total_time += t;
		if (total_time >= 210) {
			cout << cur_num << endl;
			return 0;
		}
		if (z == 'T') {
			cur_num++;
			if (cur_num > 8) {
				cur_num = 1;
			}
		}
	}
	return 0;
}