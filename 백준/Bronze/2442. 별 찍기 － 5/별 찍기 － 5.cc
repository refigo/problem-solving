#include <bits/stdc++.h>
using namespace std;
int n, cur;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cur = n;
	n = 0;
	while (cur) {
		for (int i = 0; i < cur - 1; ++i){
			cout << ' ';
		}
		for (int i = 0; i < 2 * n + 1; ++i) {
			cout << '*';
		}
		cout << '\n';
		--cur;
		++n;
	}
	return 0;
}