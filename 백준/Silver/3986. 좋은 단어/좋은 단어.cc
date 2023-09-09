#include <bits/stdc++.h>
using namespace std;
int n;
int ans;
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		stack<char> stk;
		string tmp;
		cin >> tmp;
		for (char ec : tmp) {
			if (stk.size() && stk.top() == ec) stk.pop();
			else stk.push(ec);
		}
		if (stk.size() == 0) ++ans;
	}
	cout << ans << '\n';
	return 0;
}