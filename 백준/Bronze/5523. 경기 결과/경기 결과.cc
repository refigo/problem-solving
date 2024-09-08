#include <bits/stdc++.h>
using namespace std;
int n, a, b, a_win, b_win;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a > b) a_win++;
		else if (a < b) b_win++;
	}
	cout << a_win << ' ' << b_win;
	return 0;
}