#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	cout << (long long)max (a * b / c, a / b * c);
	return 0;
}