#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int mx, mn;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	mx = max(a, max(b, c));
	mn = min(a, min(b, c));
	cout << mn << ' ';
	for (int there : {a, b, c}) {
		if (there != mx && there != mn) {
			cout << there;
			break;
		}
	}
	cout << ' ' << mx << '\n';
	return 0;
}