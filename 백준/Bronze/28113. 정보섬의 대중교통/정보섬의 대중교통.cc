#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> n >> a >> b;
	if (n <= b) {
		if (a == b) {
			cout << "Anything";
		} else if (a < b) {
			cout << "Bus";
		} else {
			cout << "Subway";
		}
	} else {
		cout << "Bus";
	}
	cout << endl;
	return 0;
}