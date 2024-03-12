#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[104][104];
int visited[104][104];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int hy, hx, ny, nx, side_chz, turn;
queue<pair<int, int>> aq;
queue<pair<int, int>> cq;
void print_map() {
	cout << "map: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "visited: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << visited[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
}
void go() {
	while (aq.size() || cq.size()) {
		queue<pair<int, int>> tmp_aq;
		while (aq.size()) {
			side_chz = 0;
			tie(hy, hx) = aq.front(); aq.pop();
			for (int i = 0; i < 4; i++) {
				ny = hy + dy[i];
				nx = hx + dx[i];
				if (ny < 0 || nx < 0 || ny >= n || nx >= n)
					continue;
				if (visited[ny][nx] > 0) continue;
				if (a[ny][nx] > 0) {
					side_chz++;
					visited[ny][nx] -= 1;
					if (visited[ny][nx] == -1)
						cq.push({ny, nx});
					continue;
				}
				visited[ny][nx] = 1;
				aq.push({ny, nx});
			}
			if (side_chz > 0) {
				visited[hy][hx] = 3;
				tmp_aq.push({hy, hx});
			}
		}
		if (cq.size() == 0) break ;
		aq = tmp_aq;
		while (cq.size()) {
			tie(hy, hx) = cq.front(); cq.pop();
			if (visited[hy][hx] <= -2) {
				a[hy][hx] = 0;
				visited[hy][hx] = 0;
			} else {
				visited[hy][hx] = 0;
			}
		}
		turn++;
		// print_map();
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	queue<pair<int, int>> q;
	q.push({0, 0});
	visited[0][0] = 1;
	while (q.size()) {
		side_chz = 0;
		tie(hy, hx) = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			ny = hy + dy[i];
			nx = hx + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m)
				continue;
			if (a[ny][nx] > 0) {
				side_chz++;
				continue;
			}
			if (visited[ny][nx] > 0) continue;
			visited[ny][nx] = 1;
			q.push({ny, nx});
		}
		if (side_chz > 0) {
			visited[hy][hx] = 3;
			aq.push({hy, hx});
		}
	}
	// print_map();
	go();
	cout << turn << '\n';
	return 0;
}
/*

First - BFS or DFS from (0, 0)
	if min 1 cheeze in side:
		push to air queue
Main Logic - BFS
	for here in air queue:
		for there in sides:
			if there == cheeze:
				visited[there] -= 1
				if (visited[side] == -1):
					push to cheeze queue
			if there == air
				tmp_aq.push(there)
		if cheeze in sides:
			tmp_aq.push(here)
	air queue = tmp_aq
	for here in cheeze queue:
		if (visited[here] <= -2):
			a[here] = 0
			visited[here] = 0
		else :
			visited[here] = 0

*/