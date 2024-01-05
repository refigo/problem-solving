#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, na, nb, nc;
int scv[3], visited[64][64][64];
struct atk {
	int a, b, c;
};
atk _atk[6] = {
	{9, 3, 1},
	{9, 1, 3},
	{3, 9, 1},
	{3, 1, 9},
	{1, 9, 3},
	{1, 3, 9},
};
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> scv[i];
	}
	queue<atk> q;
	visited[scv[0]][scv[1]][scv[2]] = 1;
	q.push({scv[0], scv[1], scv[2]});
	while (q.size()) {
		a = q.front().a;
		b = q.front().b;
		c = q.front().c;
		q.pop();
		if (a == 0 && b == 0 && c == 0) {
			break ;
		}
		for (int i = 0; i < 6; i++) {
			na = max(a - _atk[i].a, 0);
			nb = max(b - _atk[i].b, 0);
			nc = max(c - _atk[i].c, 0);
			if (visited[na][nb][nc]) continue;
			visited[na][nb][nc] = visited[a][b][c] + 1;
			q.push({na, nb, nc});
		}
	}
	cout << visited[0][0][0] - 1 << '\n';
	return 0;
}