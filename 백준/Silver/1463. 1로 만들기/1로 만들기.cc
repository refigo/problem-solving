#include <bits/stdc++.h>
using namespace std;
int visited[1000004];
int n, here;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	queue<int> q;
	q.push(n);
	visited[n] = 1;
	while (q.size()) {
		here = q.front();
		if (here == 1) {
			break ;
		}
		q.pop();
		if (here % 3 == 0 && !visited[here / 3]) {
			q.push(here / 3);
			visited[here / 3] = visited[here] + 1;
		}
		if (here % 2 == 0 && !visited[here / 2]) {
			q.push(here / 2);
			visited[here / 2] = visited[here] + 1;
		}
		if (!visited[here - 1]) {
			q.push(here - 1);
			visited[here - 1] = visited[here] + 1;
		}
	}
	cout << visited[here] - 1 << '\n';
	return 0;
}