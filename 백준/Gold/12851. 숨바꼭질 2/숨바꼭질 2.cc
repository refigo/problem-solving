#include <bits/stdc++.h>
using namespace std;
int n, k, cur;
int level[200004];
int cnt[200004];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	queue<int> q;
	level[n] = 1;
	cnt[n] = 1;
	q.push(n);
	while (q.size()) {
		cur = q.front(); q.pop();
		if (cur == k)
			break;
		for (int next : {cur - 1, cur + 1, 2 * cur}) {
			if (next < 0 || 100000 < next) continue;
			if (level[next]) {
				if (level[next] == level[cur] + 1) {
					cnt[next] += cnt[cur];
				}
				continue;
			}
			level[next] = level[cur] + 1;
			cnt[next] += cnt[cur];
			q.push(next);
		}
	}
	cout << level[k] - 1 << '\n';
	cout << cnt[k] << '\n';
	return 0;
}