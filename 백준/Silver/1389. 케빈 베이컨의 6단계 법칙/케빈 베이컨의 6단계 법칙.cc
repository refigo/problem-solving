#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
vector<int> v[104];
int visited[104];
int knum[104];
int mn = 987654321;
vector<int> ret;
void bfs(int start) {
	int here = start;
	queue<int> q;
	q.push(here);
	visited[here] = 1;
	while (q.size()) {
		here = q.front(); q.pop();
		for (int there : v[here]) {
			if (visited[there]) continue;
			q.push(there);
			visited[there] = visited[here] + 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		knum[start] += visited[i] - 1;
	}
	mn = min(mn, knum[start]);
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		bfs(i);
		fill(&visited[0], &visited[n + 1], 0);
	}
	for (int i = 1; i <= n; i++) {
		if (knum[i] == mn) ret.push_back(i);
	}
	cout << ret[0] << '\n';
	return 0;
}