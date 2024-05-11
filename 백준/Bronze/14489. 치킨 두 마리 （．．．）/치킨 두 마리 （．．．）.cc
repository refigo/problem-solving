#include <bits/stdc++.h>
using namespace std;
long long a, b, chicken;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> chicken;
	if (a + b >= 2 * chicken) {
		cout << a + b - 2 * chicken;
	}
	else {
		cout << a + b;
	}
	cout << '\n';
	return 0;
}