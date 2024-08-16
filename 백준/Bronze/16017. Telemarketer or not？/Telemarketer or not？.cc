#include <bits/stdc++.h>
using namespace std;
int last_four_digits[4];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> last_four_digits[0] >> last_four_digits[1] >> last_four_digits[2] >> last_four_digits[3];
	if ((last_four_digits[0] == 8 || last_four_digits[0] == 9) 
	 && (last_four_digits[1] == last_four_digits[2]) 
	 && (last_four_digits[3] == 8 || last_four_digits[3] == 9)) {
		cout << "ignore";
	}
	else {
		cout << "answer";
	}
	return 0;
}