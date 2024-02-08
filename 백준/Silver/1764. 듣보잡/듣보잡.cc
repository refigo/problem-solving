#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
map<string, int> mp;
vector<string> ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (n--) {
		cin >> s;
		mp[s]++;
	}
	while (m--) {
		cin >> s;
		mp[s]++;
		if (mp[s] == 2) {
			ret.push_back(s);
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << '\n';
	for (string each : ret) {
		cout << each << '\n';
	}
	return 0;
}