#include <bits/stdc++.h>
using namespace std;
int ex;
int main() {
	cin >> ex;
	if (90 <= ex) {
		cout << 'A' << '\n';
	} else if (80 <= ex) {
		cout << 'B' << '\n';
	} else if (70 <= ex) {
		cout << 'C' << '\n';
	} else if (60 <= ex) {
		cout << 'D' << '\n';
	} else {
		cout << 'F' << '\n';
	}
	return 0;
}