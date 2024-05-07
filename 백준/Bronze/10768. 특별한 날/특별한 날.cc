#include <bits/stdc++.h>
using namespace std;
int month, day;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> month >> day;
	if (month == 2 && day == 18) cout << "Special";
	else if (month < 2 || (month == 2 && day < 18)) cout << "Before";
	else cout << "After";
	return 0;
}