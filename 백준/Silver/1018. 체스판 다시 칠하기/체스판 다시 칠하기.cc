#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[54][54];
int ret_min = 70;

int go(int ai, int aj, char type) {
	// char type = a[ai][aj];
	int ret_sum = 0;

	for (int i = ai; i < ai + 8; ++i) {
		for (int j = aj; j < aj + 8; ++j) {
			if ((i - ai) % 2 == 0) {
				if ((j - aj) % 2 == 0) {
					if (a[i][j] != type) {
						++ret_sum;
					}
				} else {
					if (a[i][j] == type) {
						++ret_sum;
					}
				}
			} else {
				if ((j - aj) % 2 == 0) {
					if (a[i][j] == type) {
						++ret_sum;
					}
				} else {
					if (a[i][j] != type) {
						++ret_sum;
					}
				}
			}
		}
	}
	return ret_sum;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf(" %c", &(a[i][j]));
		}
	}
	for (int i = 0; i <= n - 8; ++i) {
		for (int j = 0; j <= m - 8; ++j) {
			int tmp = go(i, j, 'W');
			int tmp2 = go(i, j, 'B');
			if (tmp2 < tmp)
				tmp = tmp2;
			if (tmp < ret_min)
				ret_min = tmp;
		}
	}
	cout << ret_min << "\n";
	return 0;
}