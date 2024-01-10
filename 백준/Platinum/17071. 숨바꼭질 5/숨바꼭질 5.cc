#include <bits/stdc++.h>
using namespace std;
int n, k, cur, turn, ret = -1, q_size;
int visited[2][500004];
int main() {
	cin.tie(0); cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> n >> k;
	
	queue<int> q;
	q.push(n);
	visited[0][n] = 1;
	while (q.size()) {
		k += turn;
		if (k > 500000) {
			break ;
		}
		if (visited[turn % 2][k]) {
			ret = turn;
			break ;
		}
		++turn;
		q_size = q.size();
		while (q_size--) {
			cur = q.front(); q.pop();
			for (int next : {cur - 1, cur + 1, 2 * cur}) {
				if (next < 0 || next > 500000) continue;
				if (visited[turn % 2][next]) continue;
				visited[turn % 2][next] = 1;
				q.push(next);
			}
		}
	}
	cout << ret << '\n';
	return 0;
}