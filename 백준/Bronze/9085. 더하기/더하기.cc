#include <bits/stdc++.h>
using namespace std;
int tc, n, each, sum;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tc;
	while (tc--) {
		cin >> n;
		while (n--) {
			cin >> each;
			sum += each;
		}
		cout << sum << '\n';
		sum = 0;
	}
	return 0;
}