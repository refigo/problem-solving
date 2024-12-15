#include <bits/stdc++.h>
using namespace std;
int lower_rate, higher_rate;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> lower_rate >> higher_rate;
	cin >> n;
	int usage;
	for (int i = 0; i < n; i++) {
		cin >> usage;
		cout << usage << ' ';
		if (usage < 1000) {
			cout << usage * lower_rate << '\n';	
		} else {
			cout << 1000 * lower_rate + (usage - 1000) * higher_rate << '\n';
		}
	}
	return 0;
}