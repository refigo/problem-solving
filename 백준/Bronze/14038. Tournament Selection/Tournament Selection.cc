#include <bits/stdc++.h>
using namespace std;
int win_cnt;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 6; i++) {
		char c;
		cin >> c;
		if (c == 'W') win_cnt++;
	}
	if (win_cnt >= 5) cout << 1;
	else if (win_cnt >= 3) cout << 2;
	else if (win_cnt >= 1) cout << 3;
	else cout << -1;
	return 0;
}