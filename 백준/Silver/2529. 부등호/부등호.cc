#include <bits/stdc++.h>
using namespace std;
int k;
char opers[10];
int visited[11];
vector<string> ret;
bool check(char oper, char n1, char n2) {
	if (oper == '<') {
		return (n1 < n2);
	}
	if (oper == '>') {
		return (n1 > n2);
	}
	return false;
}
void go(int idx, string num_str) {
	if (idx > k) {
		ret.push_back(num_str);
		return ;
	}
	char num_char = 0;
	for (int i = 0; i <= 9; i++) {
		num_char = '0' + i;
		if (idx == 0 
		|| (check(opers[idx - 1], num_str[idx - 1], num_char) 
		&& !visited[i])) {
			visited[i] = 1;
			go(idx + 1, num_str + num_char);
			visited[i] = 0;
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> opers[i];
	}
	go(0, "");
	cout << ret.back() << '\n';
	cout << ret.front() << '\n';
	return 0;
}