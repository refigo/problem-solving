#include <bits/stdc++.h>
using namespace std;
double a, b, c, d;
double area;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b >> c >> d;
	area = a * c / b / d / 2;
	if (area == (long long)area) cout << 1;
	else cout << 0;
	return 0;
}