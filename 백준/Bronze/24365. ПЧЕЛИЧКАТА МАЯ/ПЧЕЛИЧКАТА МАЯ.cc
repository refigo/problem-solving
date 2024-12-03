#include <bits/stdc++.h>
using namespace std;
int a, b, c, total;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b >> c;
	total = a + b + c;
	int each = total / 3;
	if (each - a >= 0) {
		ret += each - a;
		b -= ret;
	}
	if (each - b >= 0) {
		ret += each - b;
	}
	cout << ret;
	return 0;
}