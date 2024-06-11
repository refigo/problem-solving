#include <bits/stdc++.h>
using namespace std;
int sleep_time, wake_time;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> sleep_time >> wake_time;
	if (sleep_time >= 20) {
		sleep_time = sleep_time - 24;
	}
	cout << wake_time - sleep_time << '\n';
	return 0;
}