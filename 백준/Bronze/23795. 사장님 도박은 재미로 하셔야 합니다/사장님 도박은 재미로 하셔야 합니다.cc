#include <bits/stdc++.h>
using namespace std;
int b, sum;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> b;
		if (b == -1) break;
		sum += b;
	}
	cout << sum;
	return 0;
}