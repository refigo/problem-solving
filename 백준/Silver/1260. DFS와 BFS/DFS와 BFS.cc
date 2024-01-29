#include <bits/stdc++.h>
using namespace std;
int n, m, v, a, b;
int visited[1004];
set<int> adj[1004];
void dfs(int here) {
	visited[here] = 1;
	cout << here << ' ';
	for (int there : adj[here]) {
		if (visited[there]) continue;
		dfs(there);
	}
}
void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = 1;
	while (q.size()) {
		int here = q.front();
		q.pop();
		cout << here << ' ';
		for (int there : adj[here]) {
			if (visited[there]) continue;
			q.push(there);
			visited[there] = 1;
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m >> v;
	while (m--) {
		cin >> a >> b;
		adj[a].insert(b);
		adj[b].insert(a);
	}
	dfs(v);
	cout << '\n';
	fill(&visited[0], &visited[1004], 0);
	bfs(v);
	cout << '\n';
	return 0;
}