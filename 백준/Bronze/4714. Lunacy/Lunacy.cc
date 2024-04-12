#include <bits/stdc++.h>
using namespace std;
double weight;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> weight;
		if (weight < 0) break;
		cout << fixed << setprecision(2)
			 << "Objects weighing " << weight
			 << " on Earth will weigh " << weight * 0.167
			 << " on the moon.\n";
		cout << fixed << setprecision(6);
	}
	return 0;
}