#include <bits/stdc++.h>
using namespace std;
int t;
int hp, mp, atk, def;
int d_hp, d_mp, d_atk, d_def;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> hp >> mp >> atk >> def;
		cin >> d_hp >> d_mp >> d_atk >> d_def;
		int power = 0;
		hp += d_hp;
		mp += d_mp;
		atk += d_atk;
		def += d_def;
		if (hp < 1) hp = 1;
		if (mp < 1) mp = 1;
		if (atk < 0) atk = 0;
		power = hp + 5 * mp + 2 * atk + 2 * def;
		cout << power << '\n';
	}
	return 0;
}