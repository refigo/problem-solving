#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, u, v;
int a[104];
int visited[104];
int here, nxt, level;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	while (n--) {
		cin >> x >> y;
		a[x] = y;
	}
	while (m--) {
		cin >> u >> v;
		a[u] = v;
	}
	queue<int> q;
	q.push(1);
	visited[1] = level = 1;
	while (q.size()) {
		here = q.front();
		q.pop();
		if (here == 100) {
			break ;
		}
		for (int i = 1; i <= 6; i++) {
			nxt = here + i;
			if (a[nxt]) {
				nxt = a[nxt];
			}
			if (visited[nxt]) continue;
			q.push(nxt);
			visited[nxt] = visited[here] + 1;
		}
	}
	cout << visited[here] - 1 << '\n';
	return 0;
}