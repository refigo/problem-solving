#include <bits/stdc++.h>
using namespace std;
int k, v, e, a, b;
bool flag = true;
vector<int> adj[20004];
int visited[20004];
void clear() {
	flag = true;
	for (int i = 1; i <= v; i++) {
		adj[i].clear();
		visited[i] = 0;
	}
}
void dfs(int here) {
	if (!flag) {
		return ;
	}
	for (int there : adj[here]) {
		if (visited[there]) {
			if (visited[there] == visited[here]) {
				flag = false;
				return ;
			}
			continue;
		}
		visited[there] = visited[here] == 1 ? 2 : 1;
		dfs(there);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> k;
	while (k--) {
		cin >> v >> e;
		while (e--) {
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		for (int i = 1; i <= v; i++) {
			if (visited[i]) continue;
			visited[i] = 1;
			dfs(i);
			if (!flag) break ;
		}
		if (flag) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		clear();
	}
	return 0;
}
/*!SECTION
2 area -> 1, 2

in adjs
if visited && same area -> NO

bfs || dfs

*/