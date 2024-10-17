#include <bits/stdc++.h>
using namespace std;
int t, n, m;
long long helmet_defense_max = 0, armor_defense_max = 0;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	long long tmp = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		helmet_defense_max = max(helmet_defense_max, tmp);
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		armor_defense_max = max(armor_defense_max, tmp);
	}
	cout << helmet_defense_max + armor_defense_max;
	return 0;
}