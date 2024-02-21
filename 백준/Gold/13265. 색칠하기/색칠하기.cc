#include <bits/stdc++.h>
using namespace std;
int t, n, m, a, b;
vector<int> adj[1004];
int visited[1004];
bool flag;
void clear() {
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	fill(&visited[0], &visited[n + 4], 0);
}
void dfs(int here) {
	for (int there : adj[here]) {
		if (visited[there]) {
			if (visited[there] == visited[here]) {
				flag = false;
			}
		} else {
			visited[there] = visited[here] == 1 ? 2: 1;
			dfs(there);
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		while (m--) {
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		flag = true;
		for (int i = 1; i <= n; i++) {
			if (visited[i]) continue;
			visited[i] = 1;
			dfs(i);
			if (flag == false) break;
		}
		if (flag) {
			cout << "possible\n";
		} else {
			cout << "impossible\n";
		}
		clear();
	}
	return 0;
}