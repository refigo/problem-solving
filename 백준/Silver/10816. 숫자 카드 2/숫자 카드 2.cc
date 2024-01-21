#include <bits/stdc++.h>
using namespace std;
int n, m, tmp;
map<int, int> mp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> tmp;
		mp[tmp]++;
	}
	cin >> m;
	while (m--) {
		cin >> tmp;
		cout << mp[tmp] << ' ';
	}
	cout << '\n';
	return 0;
}