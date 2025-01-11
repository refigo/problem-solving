#include <bits/stdc++.h>
using namespace std;
int k, w, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> k >> w >> m;
	int cnt = 0;
	while (k < w) {
		k += m;
		cnt++;
	}
	cout << cnt;
	return 0;
}