#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int k, ei, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> k;
	while (k--) {
		cin >> ei;
		if (ei == 0 && stk.size()) {
			stk.pop();
		} else {
			stk.push(ei);
		}
	}
	while (stk.size()) {
		ret += stk.top();
		stk.pop();
	}
	cout << ret << "\n";
	return 0;
}