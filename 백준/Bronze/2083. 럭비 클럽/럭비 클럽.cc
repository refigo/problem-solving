#include <bits/stdc++.h>
using namespace std;
string name;
int year, weight;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> name >> year >> weight;
		if (name == "#" && year == 0 && weight == 0) break;
		if (year > 17 || weight >= 80) cout << name << " Senior\n";
		else cout << name << " Junior\n";
	}
	return 0;
}