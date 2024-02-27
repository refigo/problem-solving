#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
vector<int> adj[2004];
int visited[2004];
int flag;
void dfs(int here, int depth) {
	if (depth >= 5 || flag == 1) {
		flag = 1;
		return ;
	}
	for (int there : adj[here]) {
		if (visited[there]) continue;
		visited[there] = 1;
		dfs(there, depth + 1);
		visited[there] = 0;
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		visited[i] = 1;
		dfs(i, 1);
		if (flag) break ;
		visited[i] = 0;
	}
	cout << flag << '\n';
	return 0;
}