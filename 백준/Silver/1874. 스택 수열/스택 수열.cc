#include <bits/stdc++.h>
using namespace std;
int n, tmp, cur;
stack<int> stk;
vector<char> ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	bool flag = true;
	while (n--) {
		cin >> tmp;
		if (!flag) continue ;
		if (tmp > cur) {
			while (cur < tmp) {
				stk.push(++cur);
				ret.push_back('+');
			}
			stk.pop();
			ret.push_back('-');
			continue ;
		}
		if (tmp < cur) {
			if (stk.top() != tmp) {
				flag = false;
				continue ;
			} else {
				stk.pop();
				ret.push_back('-');
			}
			continue ;
		}
	}
	if (!flag) {
		cout << "NO\n";
	} else {
		for (char each : ret) {
			cout << each << '\n';
		}
	}
	return 0;
}