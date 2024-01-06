#include <bits/stdc++.h>
using namespace std;
int n, k, cur;
int level[100004];
int	prev_a[100004];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	if (n == k) {
		cout << 0 << '\n';
		cout << n << '\n';
		return 0;
	}

	queue<int> q;
	level[n] = 1;
	q.push(n);
	while (q.size()) {
		cur = q.front(); q.pop();
		if (cur == k)
			break ;
		for (int next : {cur - 1, cur + 1, 2 * cur}) {
			if (next < 0 || next > 100000) continue;
			if (level[next]) continue;
			level[next] = level[cur] + 1;
			prev_a[next] = cur;
			q.push(next);
		}
	}
	cout << level[k] - 1 << '\n';

	vector<int> ret;
	for (int i = k; i != n; i = prev_a[i]) {
		ret.push_back(i);
	}
	ret.push_back(n);
	vector<int>::reverse_iterator rit = ret.rbegin();
	for (; rit != ret.rend(); rit++) {
		cout << *rit << ' ';
	}
	return 0;
}