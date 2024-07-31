#include <bits/stdc++.h>
using namespace std;
int score_a, score_b;
int each_score;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 3; i > 0; i--) {
		cin >> each_score;
		score_a += each_score * i;
	}
	for (int i = 3; i > 0; i--) {
		cin >> each_score;
		score_b += each_score * i;
	}
	if (score_a > score_b)
		cout << "A";
	else if (score_a < score_b)
		cout << "B";
	else
		cout << "T";
	return 0;
}