#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;

void go_backtracking(int idx, int lvl) {
	if (lvl == m) {
		for (int each : v) {
			cout << each << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int i = idx; i < n; i++) {
		v.push_back(i + 1);
		go_backtracking(i, lvl + 1);
		v.pop_back();
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	go_backtracking(0, 0);
	return 0;
}