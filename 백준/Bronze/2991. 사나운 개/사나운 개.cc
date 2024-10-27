#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b >> c >> d;
	for (int i = 0; i < 3; i++) {
		int arrival_time = 0;
		cin >> arrival_time;
		int cnt = 0;
		if (arrival_time % (a + b) <= a && arrival_time % (a + b) != 0) cnt++;
		if (arrival_time % (c + d) <= c && arrival_time % (c + d) != 0) cnt++;
		cout << cnt << '\n';
	}
	return 0;
}