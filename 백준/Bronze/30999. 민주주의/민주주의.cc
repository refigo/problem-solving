#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int approval;
int ret_approved;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (auto &c : s) {
			if (c == 'O') {
				approval++;
			}
		}
		if (approval >= m / 2 + 1) {
			ret_approved++;
		}
		approval = 0;
	}
	cout << ret_approved;
	return 0;
}