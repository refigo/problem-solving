#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10004];
int dp[10004], visited[10004], n, m, a, b, mx;
int dfs(int here) {
	visited[here] = 1;
	int ret = 1;
	for (int there : adj[here]) {
		if (visited[there]) continue;
		ret += dfs(there);
	}
	return ret;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		adj[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		memset(visited, 0, sizeof(visited));
		dp[i] = dfs(i);
		mx = max(dp[i], mx);
	}
	for (int i = 1; i <= n; i++) {
		if (mx == dp[i])
			cout << i << " ";
	}
	return 0;
}