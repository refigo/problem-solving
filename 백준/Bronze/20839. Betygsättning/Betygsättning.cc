#include <bits/stdc++.h>
using namespace std;
int a, c, e, x, y, z;
char grade;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> c >> e;
	cin >> x >> y >> z;
	grade = 'E';
	if (z >= e) {
		grade = 'E';
		if (y >= c) {
			grade = 'C';
			if (x >= a) {
				grade = 'A';
			}
			else if (x >= (a + 1) / 2) {
				grade = 'B';
			}
		}
		else if (y >= (c + 1) / 2) {
			grade = 'D';
		}
	}
	cout << grade;
	return 0;
}