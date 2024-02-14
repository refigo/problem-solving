#include <bits/stdc++.h>
using namespace std;
int m;
string cmd;
int a[24];
int x;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> m;
	while (m--) {
		cin >> cmd;
		if (cmd[0] == 'a' && cmd[1] == 'd') {
			cin >> x;
			a[x] = 1;
			continue;
		}
		if (cmd[0] == 'a' && cmd[1] == 'l') {
			fill(&a[0], &a[24], 1);
			continue;
		}
		if (cmd[0] == 'r') {
			cin >> x;
			a[x] = 0;
			continue;
		}
		if (cmd[0] == 'c') {
			cin >> x;
			cout << a[x] << '\n';
			continue;
		}
		if (cmd[0] == 't') {
			cin >> x;
			a[x] = a[x] ? 0 : 1;
			continue;
		}
		if (cmd[0] == 'e') {
			fill(&a[0], &a[24], 0);
			continue;
		}
	}
	return 0;
}