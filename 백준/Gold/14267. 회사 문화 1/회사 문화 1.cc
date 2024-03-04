#include <bits/stdc++.h>
using namespace std;
int upper, n, m, num_i, w;
int ching[100004];
vector<int> v[100004];
int ret[100004];
void dfs(int here) {
	ret[here] += ching[here];
	for (int there : v[here]) {
		ret[there] += ret[here];
		dfs(there);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> upper;
		if (upper == -1) continue;
		v[upper].push_back(i);
	}
	while (m--) {
		cin >> num_i >> w;
		ching[num_i] += w;
	}
	dfs(1);
	for (int i = 1; i <= n; i++) {
		cout << ret[i] << ' ';
	}
	cout << '\n';
	return 0;
}