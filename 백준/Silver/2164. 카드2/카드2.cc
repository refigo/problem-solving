#include <bits/stdc++.h>
using namespace std;
int n, tmp;
queue<int> qi;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		qi.push(i);
	}
	while (qi.size() > 1) {
		qi.pop();
		tmp = qi.front();
		qi.pop();
		qi.push(tmp);
	}
	cout << qi.front() << '\n';
	return 0;
}