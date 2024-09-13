#include <bits/stdc++.h>
using namespace std;
int t, n, p1_score, p2_score;
char p1, p2;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> n;
		p1_score = p2_score = 0;
		while (n--) {
			cin >> p1 >> p2;
			if (p1 == p2) continue;
			if (p1 == 'R' && p2 == 'S') p1_score++;
			else if (p1 == 'S' && p2 == 'P') p1_score++;
			else if (p1 == 'P' && p2 == 'R') p1_score++;
			else p2_score++;
		}
		if (p1_score == p2_score) cout << "TIE\n";
		else if (p1_score > p2_score) cout << "Player 1\n";
		else cout << "Player 2\n";
	}
	return 0;
}