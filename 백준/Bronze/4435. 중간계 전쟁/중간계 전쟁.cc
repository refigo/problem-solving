#include <bits/stdc++.h>
using namespace std;
int t;
int army_gandalf[6];
const int army_gandalf_power[6] = { 1,2,3,3,4,10 };
int army_sauron[7];
const int army_sauron_power[7] = { 1,2,2,2,3,5,10 };
int power_gandalf;
int power_sauron;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> army_gandalf[j];
		}
		for (int j = 0; j < 7; j++) {
			cin >> army_sauron[j];
		}
		power_gandalf = 0;
		power_sauron = 0;
		for (int j = 0; j < 6; j++) {
			power_gandalf += army_gandalf[j] * army_gandalf_power[j];
		}
		for (int j = 0; j < 7; j++) {
			power_sauron += army_sauron[j] * army_sauron_power[j];
		}
		cout << "Battle " << i << ": ";
		if (power_gandalf > power_sauron) {
			cout << "Good triumphs over Evil\n";
		}
		else if (power_gandalf < power_sauron) {
			cout << "Evil eradicates all trace of Good\n";
		}
		else {
			cout << "No victor on this battle field\n";
		}
	}
	return 0;
}