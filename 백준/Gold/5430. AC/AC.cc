#include <bits/stdc++.h>
using namespace std;
int t, n;
string cmd, s;
deque<int> dq;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		cin >> cmd;
		cin >> n;
		cin >> s;
		dq.clear();
		bool rev_flag = false;
		bool error_flag = false;
		if (n > 0) {
			for (int i = 1; i < s.size(); i++) {
				int sz = s.find(',', i);
				if (sz != string::npos) {
					dq.push_back(stoi(s.substr(i, sz - i)));
				} else {
					sz = s.find(']', i);
					dq.push_back(stoi(s.substr(i, sz - i)));
				}
				i = sz;
			}
		}
		for (int i = 0; i < cmd.size(); i++) {
			if (cmd[i] == 'R') {
				// rev_flag = !rev_flag;
				rev_flag = rev_flag ? false : true;
			}
			if (cmd[i] == 'D') {
				if (dq.size()) {
					if (rev_flag) {
						dq.pop_back();
					} else {
						dq.pop_front();
					}
				} else {
					error_flag = true;
					break ;
				}
			}	
		}
		if (error_flag) {
			cout << "error\n";
			continue;
		}
		cout << "[";
		if (!rev_flag) {
			for (auto it = dq.begin(); it != dq.end(); it++) {
				cout << *it;
				if (it != dq.end() - 1)
					cout << ",";
			}
		} else {
			for (auto it = dq.rbegin(); it != dq.rend(); it++) {
				cout << *it;
				if (it != dq.rend() - 1)
					cout << ",";
			}
		}
		cout << "]";
		cout << endl;
	}
	return 0;
}