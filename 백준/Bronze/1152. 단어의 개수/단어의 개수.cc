#include <bits/stdc++.h>
using namespace std;
string s;
bool flag;
int ret_cnt;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	getline(cin, s);
	flag = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			flag = true;
		}
		if (flag == true && s[i] != ' ') {
			++ret_cnt;
			flag = false;
		}
	}
	cout << ret_cnt << "\n";
	return 0;
}
