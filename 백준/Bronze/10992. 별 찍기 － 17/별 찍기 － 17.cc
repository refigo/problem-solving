#include <bits/stdc++.h>
using namespace std;
int n, star_floor;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	star_floor = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n - i; j++) cout << ' ';
		for (int j = 1; j <= star_floor; j++) {
			if (j == 1 || j == star_floor) cout << '*';
			else cout << ' ';
		}
		star_floor += 2;
		cout << '\n';
	}
	for (int j = 1; j <= star_floor; j++) cout << '*';

	return 0;
}