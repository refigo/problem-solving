#include <bits/stdc++.h>
using namespace std;
int t, num, min_even, sum_evens;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		for (int i = 0; i < 7; i++) {
			cin >> num;
			if (num % 2 == 0) {
				if (min_even == 0 || num < min_even) min_even = num;
				sum_evens += num;
			}
		}
		cout << sum_evens << ' ' << min_even << '\n';
		sum_evens = 0;
		min_even = 0;
	}
	return 0;
}