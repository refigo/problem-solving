#include <bits/stdc++.h>
using namespace std;
int n, each, sum;
float ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	if (n == 0) {
		cout << "divide by zero" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> each;
		sum += each;
	}
	ret = (float)sum / n;
	ret = 1;
	cout << fixed;
	cout.precision(2);
	cout << ret << endl;
	return 0;
}