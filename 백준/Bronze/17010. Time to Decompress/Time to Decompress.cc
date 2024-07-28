#include <bits/stdc++.h>
using namespace std;
int l, n;
char c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> l;
	while (l--) {
		cin >> n >> c;
		for (int i = 0; i < n; i++) cout << c;
		cout << '\n';
	}
	return 0;
}