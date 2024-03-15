#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break ;
		}
		if (a > b) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	return 0;
}