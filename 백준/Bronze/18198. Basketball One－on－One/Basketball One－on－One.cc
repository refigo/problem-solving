#include <bits/stdc++.h>
using namespace std;
string s;
char winner;
int score_a, score_b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	for (int i = 0; i < s.size(); i += 2) {
		if (s[i] == 'A') {
			score_a += s[i + 1] - '0';
		}
		else {
			score_b += s[i + 1] - '0';
		}
	}
	if (score_a > score_b) {
		winner = 'A';
	}
	else {
		winner = 'B';
	}
	cout << winner << '\n';
	return 0;
}