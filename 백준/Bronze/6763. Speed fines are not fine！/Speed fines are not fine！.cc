#include <bits/stdc++.h>
using namespace std;
int limit, recored;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> limit >> recored;
	int sub = recored - limit;
	if (sub > 0) {
		cout << "You are speeding and your fine is $";
		if (sub <= 20) cout << "100.";
		else if (sub <= 30) cout << "270.";
		else cout << "500.";
	} else {
		cout << "Congratulations, you are within the speed limit!";
	}
	cout << endl;
	return 0;
}