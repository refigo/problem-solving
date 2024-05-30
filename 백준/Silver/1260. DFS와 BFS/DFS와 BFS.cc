#include <bits/stdc++.h>
using namespace std;

int n, m, v;
int a, b;
vector<int> adj[1004];
bool visited[1004];

void dfs(int here) {
	visited[here] = true;
	cout << here << ' ';
	for (int there : adj[here]) {
		if (visited[there]) continue;
		dfs(there);
	}
}

void bfs(int start) {
	queue<int> que;
	visited[start] = true;
	que.push(start);
	int here = 0;
	while (que.size()) {
		here = que.front();
		que.pop();
		cout << here << ' ';
		for (int there : adj[here]) {
			if (visited[there]) continue;
			que.push(there);
			visited[there] = true;
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m >> v;
	while (m--) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}
	dfs(v);
	cout << '\n';
	fill(&visited[0], &visited[1004], 0);
	bfs(v);
	cout << '\n';
	return 0;
}