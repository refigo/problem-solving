#include <bits/stdc++.h>
using namespace std;
int n;
map<int, vector<int>> quarters;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x == 0 || y == 0) quarters[0].push_back(x);
		else if (x > 0 && y > 0) quarters[1].push_back(x);
		else if (x < 0 && y > 0) quarters[2].push_back(x);
		else if (x < 0 && y < 0) quarters[3].push_back(x);
		else quarters[4].push_back(x);
	}
	for (int i = 1; i <= 4; i++) {
		cout << "Q" << i << ": ";
		cout << quarters[i].size() << '\n';
	}
	cout << "AXIS: " << quarters[0].size() << '\n';
	return 0;
}