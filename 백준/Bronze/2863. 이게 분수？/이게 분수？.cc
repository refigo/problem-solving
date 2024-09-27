#include <bits/stdc++.h>
using namespace std;
float a, b, c, d;
float max_num = -1;
int rot_idx = 0;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	cin >> c >> d;
	max_num = a / c + b / d;
	if (max_num < c / d + a / b) {
		max_num = c / d + a / b;
		rot_idx = 1;
	}
	if (max_num < d / b + c / a) {
		max_num = d / b + c / a;
		rot_idx = 2;
	}
	if (max_num < b / a + d / c) {
		max_num = b / a + d / c;
		rot_idx = 3;
	}
	cout << rot_idx;
	return 0;
}