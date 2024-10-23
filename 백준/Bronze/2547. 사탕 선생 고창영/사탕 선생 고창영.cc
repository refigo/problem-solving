#include <bits/stdc++.h>
using namespace std;
long long t, n;
long long each_candies;
long long remain_candies;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		remain_candies = 0;
		for (int i = 0; i < n; i++) {
			cin >> each_candies;
			remain_candies += each_candies % n;
		}
		if (remain_candies % n == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}