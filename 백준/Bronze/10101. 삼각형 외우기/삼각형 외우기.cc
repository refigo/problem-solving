#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	if (a == 60 && b == 60 && c == 60)
		cout << "Equilateral";
	else if (a + b + c == 180 && (a == b || b == c || c == a))
		cout << "Isosceles";
	else if (a + b + c == 180 && a != b && b != c && c != a)
		cout << "Scalene";
	else
		cout << "Error";
	return 0;
}