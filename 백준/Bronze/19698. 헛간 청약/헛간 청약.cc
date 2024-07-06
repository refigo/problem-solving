#include <bits/stdc++.h>
using namespace std;
int n, w, h, l;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> w >> h >> l;
	cout << min(n, (w / l) * (h / l)) << '\n';
	return 0;
}