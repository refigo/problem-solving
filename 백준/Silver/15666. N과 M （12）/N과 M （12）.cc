#include <bits/stdc++.h>
using namespace std;

int n, m;
int tmp;
vector<int> v;
set<int> si;

void go_backtracking(int lvl) {
	if (lvl == m) {
		for (int each : v) {
			cout << each << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int each : si) {
		if (!lvl || (lvl && v[lvl - 1] <= each)) {
			v.push_back(each);
			go_backtracking(lvl + 1);
			v.pop_back();
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		si.insert(tmp);
	}
	go_backtracking(0);
	return 0;
}