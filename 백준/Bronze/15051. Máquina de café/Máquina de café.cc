#include <bits/stdc++.h>
using namespace std;
int a[3];
int cnt_min = -1;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (i == j) continue;
			cnt += a[j] * abs(i - j) * 2;
		}
		if (cnt_min == -1 || cnt_min > cnt) {
			cnt_min = cnt;
		}
	}
	cout << cnt_min;
	return 0;
}