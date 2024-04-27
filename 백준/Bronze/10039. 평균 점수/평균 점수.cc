#include <bits/stdc++.h>
using namespace std;
int score, sum;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 5; i++) {
		cin >> score;
		if (score < 40) score = 40;
		sum += score;
	}
	cout << sum / 5;
	return 0;
}