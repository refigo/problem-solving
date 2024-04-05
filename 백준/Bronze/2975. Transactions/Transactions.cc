#include <bits/stdc++.h>
using namespace std;
int first, second;
char letter;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> first >> letter >> second;
		if (first == 0 && letter == 'W' && second == 0) break;
		if (letter == 'W') {
			if (first - second >= -200) cout << first - second << "\n";
			else cout << "Not allowed\n";
		}
		else {
			cout << first + second << "\n";
		}
	}
	return 0;
}