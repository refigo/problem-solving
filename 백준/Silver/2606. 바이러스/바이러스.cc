#include <bits/stdc++.h>
using namespace std;
int n, cnt, a, b;
vector<int> adj[104];
int visited[104];
void go(int here) {
	visited[here] = 1;
	cnt++;
	for (int there : adj[here]) {
		if (visited[there]) continue;
		go(there);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> cnt;
	while (cnt--) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	go(1);
	cout << cnt << '\n';
	return 0;
}