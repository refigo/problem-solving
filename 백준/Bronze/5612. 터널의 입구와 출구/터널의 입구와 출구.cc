#include <bits/stdc++.h>
using namespace std;
int n, m;
int drive_in, drive_out;
int max_in = -1;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	cin >> m;
	max_in = m;
	for (int i = 1; i <= n; i++) {
		cin >> drive_in >> drive_out;
		int temp = drive_in - drive_out;
		m += temp;
		if (m < 0) max_in = 0;
		if (max_in == 0) continue;
		if (m > max_in) max_in = m;
	}
	cout << max_in;
	return 0;
}