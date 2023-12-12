#include <bits/stdc++.h>
using namespace std;
int n, num;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> num;
		if (num <= 1)
			continue;
		bool is_prime = true;
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime)
			ret++;
	}
	cout << ret << "\n";
	return 0;
}