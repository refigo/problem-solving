#include <bits/stdc++.h>
using namespace std;
int n, x;
int sum_time;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum_time += x;
		sum_time += 8;
	}
	sum_time -= 8;
	cout << sum_time / 24 << ' ' << sum_time % 24;
	return 0;
}