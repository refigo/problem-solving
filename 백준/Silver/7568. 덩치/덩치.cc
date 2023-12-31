#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int cnt;
vector<pair<int, int>> vpi;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vpi.push_back({x, y});
	}
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < n; j++) {
			if (j == i) {
				continue ;
			}
			if (vpi[j].first > vpi[i].first 
			&& vpi[j].second > vpi[i].second) {
				cnt++;
			}
		}
		cout << (cnt + 1) << ' ';
	}
	return 0;
}