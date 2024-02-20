#include <bits/stdc++.h>
using namespace std;
int n, a, b, m, c, d;
vector<int> v[104];
int visited[104];
int here;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> a >> b;
	cin >> m;
	while (m--) {
		cin >> c >> d;
		v[c].push_back(d);
		v[d].push_back(c);
	}
	queue<int> q;
	q.push(a);
	visited[a] = 1;
	while (q.size()) {
		here = q.front(); q.pop();
		for (int there : v[here]) {
			if (visited[there]) continue;
			q.push(there);
			visited[there] = visited[here] + 1;
		}
	}
	if (visited[b]) {
		cout << visited[b] - 1 << '\n';
	} else {
		cout << -1 << '\n';
	}
	return 0;
}