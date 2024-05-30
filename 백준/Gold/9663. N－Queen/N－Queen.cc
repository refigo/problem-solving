#include <bits/stdc++.h>
using namespace std;

int n;
int a[19];

bool is_valid(int y) {
	for (int i = y - 1; i >= 0; i--) {
		if (a[y] == a[i] 
		|| ((y - i) == abs(a[y] - a[i]))) {
			return false;
		}
	}
	return true;
}

int n_queen(int y) {
	int ret = 0;
	// termination condition
	if (y == n) {
		return 1;
	}
	for (int x = 0; x < n; x++) {
		a[y] = x;
		if (is_valid(y)) {
			ret += n_queen(y + 1);
		}
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cout << n_queen(0);
	return 0;
}