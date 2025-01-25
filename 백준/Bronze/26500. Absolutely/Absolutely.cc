#include <bits/stdc++.h>
using namespace std;
int n;
double a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << fixed << setprecision(1) << abs(a - b) << '\n';
	}
	return 0;
}