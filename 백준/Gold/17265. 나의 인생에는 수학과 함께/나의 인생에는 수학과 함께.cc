#include <bits/stdc++.h>
using namespace std;
int n;
char a[9][9];
int ny, nx, mx = INT_MIN, mn = INT_MAX;
const int dy[2] = {0, 1};
const int dx[2] = {1, 0};
void operate(string& str) {
	int ret = str[0] - '0';
	char op = 0;
	for (int i = 1; i < str.size(); i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			if (op == '+') {
				ret += str[i] - '0';
			} else if (op == '-') {
				ret -= str[i] - '0';
			} else if (op == '*') {
				ret *= str[i] - '0';
			}
		} else {
			op = str[i];
		}
	}
	mx = max(mx, ret);
	mn = min(mn, ret);
}
void dfs(int y, int x, string str) {
	if (y == n - 1 && x == n - 1) {
		operate(str);
		return ;
	}
	for (int i = 0; i < 2; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n)
			continue;
		dfs(ny, nx, str + a[ny][nx]);
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	string str;
	dfs(0, 0, str + a[0][0]);
	cout << mx << ' ' << mn << '\n';
	return 0;
}
/*!SECTION
dfs
	only right and below
set string
	parse -> operate
*/