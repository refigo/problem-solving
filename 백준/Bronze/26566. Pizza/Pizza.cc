#include <bits/stdc++.h>
using namespace std;
float a1, p1, r1, p2;
int n;
const float pi = 3.14159265358979323846;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a1 >> p1;
		cin >> r1 >> p2;
		float a2 = pi * r1 * r1;
		if (a1 / p1 > a2 / p2) {
			cout << "Slice of pizza\n";
		} else {
			cout << "Whole pizza\n";
		}
	}
	return 0;
}