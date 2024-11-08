#include <bits/stdc++.h>
using namespace std;
int t, n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		int end_two = n % 100;
		if ((n + 1) % end_two) {
			cout << "Bye\n";
		} else {
			cout << "Good\n";
		}
	}
	return 0;
}