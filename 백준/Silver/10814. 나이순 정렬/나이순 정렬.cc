#include <bits/stdc++.h>
using namespace std;
int n, old;
string name;
map<int, vector<string>> mp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> old >> name;
		mp[old].push_back(name);
	}
	for (auto p : mp) {
		for (auto e : p.second) {
			cout << p.first << ' ' << e << '\n';
		}
	}
	return 0;
}