#include <bits/stdc++.h>
using namespace std;
int t, n;
double gpa;
int c, total_c;
double g;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		gpa = 0;
		total_c = 0;
		for (int i = 0; i < n; i++) {
			cin >> c >> g;
			gpa += c * g;
			total_c += c;
		}
		cout << total_c << " ";
		cout << fixed << setprecision(1) << gpa / total_c << '\n';
	}
	return 0;
}