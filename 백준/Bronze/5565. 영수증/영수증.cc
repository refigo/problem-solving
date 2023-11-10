#include <bits/stdc++.h>
using namespace std;
int sum, each;
int main() {
	cin >> sum;
	for (int i = 0; i < 9; i++) {
		cin >> each;
		sum -= each;
	}
	cout << sum << "\n";
	return 0;
}