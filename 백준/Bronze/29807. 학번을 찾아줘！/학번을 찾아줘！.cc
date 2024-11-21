#include <bits/stdc++.h>
using namespace std;
int t;
long long subject[5];
long long result;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> subject[i];
	}
	if (subject[0] > subject[2]) {
		result += 508 * (subject[0] - subject[2]);
	} else {
		result += 108 * (subject[2] - subject[0]);
	}
	if (subject[1] > subject[3]) {
		result += 212 * (subject[1] - subject[3]);
	} else {
		result += 305 * (subject[3] - subject[1]);
	}
	result += 707 * subject[4];
	cout << result * 4763;
	return 0;
}