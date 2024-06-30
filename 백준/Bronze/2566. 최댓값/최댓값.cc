#include <bits/stdc++.h>
using namespace std;
int n, max_num = -1, max_i, max_j;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> n;
			if (n > max_num) {
				max_num = n;
				max_i = i;
				max_j = j;
			}
		}
	}
	cout << max_num << '\n' << max_i << ' ' << max_j;
	return 0;
}