#include <bits/stdc++.h>
using namespace std;
int g, p, t;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> g >> p >> t;
	int count_group_test = g + t * p;
	int count_individual_test = g * p;
	if (count_group_test == count_individual_test) {
		cout << "0\n";
	}
	else if (count_group_test > count_individual_test) {
		cout << "1\n";
	} else {
		cout << "2\n";
	}
	return 0;
}