#include <bits/stdc++.h>
using namespace std;
string s;
void go() {
	stack<char> stk;
	bool flag_inval = false;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '.')
			break ;
		if (s[i] == ')') {
			if (stk.size() && stk.top() == '(') {
				stk.pop();
			} else {
				flag_inval = true;
				break ;
			}
		}
		if (s[i] == ']') {
			if (stk.size() && stk.top() == '[') {
				stk.pop();
			} else {
				flag_inval = true;
				break ;
			}
		}
		if (s[i] == '(' || s[i] == '[') {
			stk.push(s[i]);
		}
	}
	if (stk.size() || flag_inval == true)
		cout << "no\n";
	else
		cout << "yes\n";
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		getline(cin, s);
		if (s == ".")
			break ;
		go();
	}
	return 0;
}