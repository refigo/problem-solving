#include <bits/stdc++.h>
using namespace std;
int n, cur;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	cur = n;
	while (cur) {
		for (int i = 0; i < n; ++i){
			if (i < n - cur) {
				cout << ' ';
			} else {
				cout << '*';
			}
		}
		cout << '\n';
		--cur;
	}
	return 0;
}