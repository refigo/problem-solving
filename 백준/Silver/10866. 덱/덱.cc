#include <bits/stdc++.h>
using namespace std;
int n, num;
string cmd;
deque<int> dq;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> cmd;
		if (cmd == "push_back") {
			cin >> num;
			dq.push_back(num);
			continue;
		}
		if (cmd == "push_front") {
			cin >> num;
			dq.push_front(num);
			continue;
		}
		if (cmd == "pop_front") {
			if (dq.size() == 0) {
				cout << -1;
			} else {
				cout << dq.front();
				dq.pop_front();
			}
			cout << '\n';
		}
		if (cmd == "pop_back") {
			if (dq.size() == 0) {
				cout << -1;
			} else {
				cout << dq.back();
				dq.pop_back();
			}
			cout << '\n';
		}
		if (cmd == "size") {
			cout << dq.size() << '\n';
		}
		if (cmd == "empty") {
			cout << int(dq.empty()) << '\n';
		}
		if (cmd == "front") {
			if (dq.size() == 0) {
				cout << -1;
			} else {
				cout << dq.front();
			}
			cout << '\n';
		}
		if (cmd == "back") {
			if (dq.size() == 0) {
				cout << -1;
			} else {
				cout << dq.back();
			}
			cout << '\n';
		}
	}
	return 0;
}