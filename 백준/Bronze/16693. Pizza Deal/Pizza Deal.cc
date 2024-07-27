#include <bits/stdc++.h>
using namespace std;
double a, p1, r, p2;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> p1 >> r >> p2;
	double whole_area = 3.14159265358979323846 * r * r;
	if (a / p1 > whole_area / p2) {
		cout << "Slice of pizza";
	}
	else {
		cout << "Whole pizza";
	}
	return 0;
}