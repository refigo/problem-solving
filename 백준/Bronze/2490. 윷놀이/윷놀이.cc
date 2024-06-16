#include <bits/stdc++.h>
using namespace std;
int a[8];
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	for (int i = 0; i < 3; i++) {
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		int cnt = 0;
		for (int i = 0; i < 4; i++) {
			if (a[i] == 1) {
				cnt++;
				a[i] = 0;
			}
		}
		if (cnt == 0) cout << "D\n";
		else if (cnt == 1) cout << "C\n";
		else if (cnt == 2) cout << "B\n";
		else if (cnt == 3) cout << "A\n";
		else cout << "E\n";
	}
	return 0;
}