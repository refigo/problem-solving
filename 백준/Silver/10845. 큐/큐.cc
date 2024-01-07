#include <bits/stdc++.h>
using namespace std;
int n, num;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	queue<int> q;
	while (n--) {
		cin >> s;
		if (s[0] == 'p' && s[1] == 'u') {
			cin >> num;
			q.push(num);
			continue;
		}
		if (s[0] == 'p' && s[1] == 'o') {
			if (q.size()) {
				cout << q.front() << '\n';
				q.pop();
			} else {
				cout << -1 << '\n';
			}
			continue;
		}
		if (s[0] == 's') {
			cout << q.size() << '\n';
			continue;
		}
		if (s[0] == 'e') {
			cout << q.empty() << '\n';
			continue;
		}
		if (s[0] == 'f') {
			if (q.size()) {
				cout << q.front() << '\n';
			} else {
				cout << -1 << '\n';
			}
			continue;
		}
		if (s[0] == 'b') {
			if (q.size()) {
				cout << q.back() << '\n';
			} else {
				cout << -1 << '\n';
			}
			continue;
		}
	}
	return 0;
}