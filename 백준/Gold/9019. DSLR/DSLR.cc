#include <bits/stdc++.h>
using namespace std;
int t, a, b;
int prev_a[10004];
char cmd_a[10004];
struct num_cmd {
	int num;
	char cmd;
};
void clear() {
	for (int i = 0; i < 10004; i++) {
		prev_a[i] = 0;
		cmd_a[i] = 0;
	}
}
void print_ret() {
	stack<int> stk;
	int cur = b;
	while (cur != a) {
		stk.push(cur);
		cur = prev_a[cur];
	}
	while (stk.size()) {
		cout << cmd_a[stk.top()];
		stk.pop();
	}
	cout << '\n';
}
num_cmd lr(int here) {
	int tmp = 0;
	tmp = here % 10;
	here -= tmp;
	here /= 10;
	here += tmp * 1000;
	return {here, 'R'};
}
num_cmd ll(int here) {
	int tmp = 0;
	tmp = here / 1000;
	here %= 1000;
	here *= 10;
	here += tmp;
	return {here, 'L'};
}
num_cmd ls(int here) {
	--here;
	if (here < 0) {
		here = 9999;
	}
	return {here, 'S'};
}
num_cmd ld(int here) {
	return {(2 * here) % 10000, 'D'};
}
void bfs() {
	queue<int> q;
	q.push(a);
	int here = 0;
	while (q.size()) {
		here = q.front(); q.pop();
		if (cmd_a[b]) {
			break ;
		}
		for (num_cmd there : { ld(here), ls(here), ll(here), lr(here)}) {
			if (cmd_a[there.num]) continue;
			prev_a[there.num] = here;
			cmd_a[there.num] = there.cmd;
			q.push(there.num);
			// cout << here << " -> " << there.num << " : " << there.cmd << '\n';
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		bfs();
		print_ret();
		clear();
	}
	return 0;
}
/*!SECTION
BFS
	DSLR logics

visited
prev with cmd

*/