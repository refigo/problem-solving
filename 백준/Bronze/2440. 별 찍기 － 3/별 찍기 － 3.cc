#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n) {
		for (int i = 0; i < n; ++i){
			cout << '*';
		}
		cout << '\n';
		--n;
	}
	return 0;
}