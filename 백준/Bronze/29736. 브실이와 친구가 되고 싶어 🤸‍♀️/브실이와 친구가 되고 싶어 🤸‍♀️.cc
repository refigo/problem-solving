#include <bits/stdc++.h>
using namespace std;
int a, b, k, x;
int num_friends;
int min_ans, max_ans;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	cin >> k >> x;
	min_ans = k -x;
	max_ans = k + x;
	for (int i = a; i <= b; i++) {
		if (i >= min_ans && i <= max_ans) {
			num_friends++;
		}
	}
	if (num_friends == 0) {
		cout << "IMPOSSIBLE";
	} else {
		cout << num_friends;
	}
	return 0;
}