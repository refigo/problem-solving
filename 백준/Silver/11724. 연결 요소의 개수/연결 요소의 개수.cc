#include <bits/stdc++.h>
using namespace std;
int n, m, u, v, cnt;
vector<int> adj[1004];
int visited[1004];
void dfs(int here) {
	visited[here] = 1;
	for (int there : adj[here]) {
		if (visited[there]) continue;
		dfs(there);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (m--) {
		cin >> u >> v;
		adj[u - 1].push_back(v - 1);
		adj[v - 1].push_back(u - 1);
	}
	for (int i = 0; i < n; i++) {
		if (visited[i]) continue;
		dfs(i);
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}