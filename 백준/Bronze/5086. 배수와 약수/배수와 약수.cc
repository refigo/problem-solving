#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		if (a % b == 0)
			cout << "multiple\n";
		else if (b % a == 0)
			cout << "factor\n";
		else
			cout << "neither\n";
	}
	return 0;
}