#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;
int a[10];
bool visited[10];

void go_backtracking(int lvl) {
	if (lvl == m) {
		for (int each : v) {
			cout << each << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			v.push_back(a[i]);
			go_backtracking(lvl + 1);
			v.pop_back();
			visited[i] = false;
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(&a[0], &a[n]);
	go_backtracking(0);
	return 0;
}