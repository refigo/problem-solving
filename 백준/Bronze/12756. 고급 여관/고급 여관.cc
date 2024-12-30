#include <bits/stdc++.h>
using namespace std;
int a_attack, a_life, b_attack, b_life;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a_attack >> a_life;
	cin >> b_attack >> b_life;
	while (a_life > 0 && b_life > 0) {
		b_life -= a_attack;
		a_life -= b_attack;
	}
	if (a_life <= 0 && b_life <= 0) cout << "DRAW";
	else if (a_life <= 0) cout << "PLAYER B";
	else cout << "PLAYER A";
	return 0;
}