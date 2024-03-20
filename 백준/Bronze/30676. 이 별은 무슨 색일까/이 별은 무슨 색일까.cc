#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (1) {
		if (620 <= n && n <= 780) {
			cout << "Red\n";
			break;
		}
		if (590 <= n && n < 620) {
			cout << "Orange\n";
			break;
		}
		if (570 <= n && n < 590) {
			cout << "Yellow\n";
			break;
		}
		if (495 <= n && n < 570) {
			cout << "Green\n";
			break;
		}
		if (450 <= n && n < 495) {
			cout << "Blue\n";
			break;
		}
		if (425 <= n && n < 450) {
			cout << "Indigo\n";
			break;
		}
		if (380 <= n && n < 425) {
			cout << "Violet\n";
			break;
		}
	}
	return 0;
}