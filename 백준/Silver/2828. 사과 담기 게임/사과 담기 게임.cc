#include "bits/stdc++.h"
using namespace std;

int n, m, j;
int d;
int lft;
int ret;

int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	lft = 1;
	cin >> j;
	while (j--) {
		cin >> d;
		if (d < lft) {
			ret += lft - d;
			lft = d;
		} else if (d >= lft + m) {
			ret += d - (lft + m - 1);
			lft = d - m + 1;
		}
	}
	cout << ret << '\n';
	return 0;
}