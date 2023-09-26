#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main() {
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << (a + b) << '\n';
	}
	return 0;
}