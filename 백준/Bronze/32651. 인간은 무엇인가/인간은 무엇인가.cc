#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	if (n > 100000) {
		cout << "No";
	} else if (n % 2024 == 0) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}