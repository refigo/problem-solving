#include <bits/stdc++.h>
using namespace std;
int a;
double x;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a;
	cout << fixed << setprecision(10);
	cout << (float)100 / a << endl;
	cout << (float)100 / (100 - a) << endl;
	return 0;
}