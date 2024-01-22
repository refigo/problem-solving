#include <bits/stdc++.h>
using namespace std;
int n, num;
string cmd;
stack<int> stk;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> cmd;
		if (cmd[0] == 'p' && cmd[1] == 'u') {
			cin >> num;
			stk.push(num);
			continue;
		}
		if (cmd[0] == 't') {
			if (stk.size() > 0) {
				cout << stk.top() << '\n';
			} else {
				cout << -1 << '\n';
			}
			continue;
		}
		if (cmd[0] == 'p' && cmd[1] == 'o') {
			if (stk.size() > 0) {
				cout << stk.top() << '\n';
				stk.pop();
			} else {
				cout << -1 << '\n';
			}
			continue;
		}
		if (cmd[0] == 's') {
			cout << stk.size() << '\n';
			continue;
		}
		if (cmd[0] == 'e') {
			cout << stk.empty() << '\n';
			continue;
		}
	}
	return 0;
}