#include <bits/stdc++.h>
using namespace std;
int t, n, num;
string cmd;
map<int, int> mp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		mp.clear();
		cin >> n;
		while (n--) {
			cin >> cmd;
			if (cmd[0] == 'I') {
				cin >> num;
				mp[num]++;
			}
			if (cmd[0] == 'D') {
				cin >> num;
				if (mp.size() && num == -1) {
					auto tmp = mp.begin();
					tmp->second--;
					if (tmp->second == 0) {
						mp.erase(tmp->first);
					}
				}
				if (mp.size() && num == 1) {
					auto tmp = mp.rbegin();
					tmp->second--;
					if (tmp->second == 0) {
						mp.erase(tmp->first);
					}
				}
			}
		}
		if (mp.empty()) {
			cout << "EMPTY\n";
		} else {
			cout << mp.rbegin()->first << ' ';
			cout << mp.begin()->first << '\n';
		}
	}
	return 0;
}