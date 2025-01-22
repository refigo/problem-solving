#include <bits/stdc++.h>
using namespace std;
int h, w;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> h >> w;
	int min_s = min(h, w);
	int ret = min_s * 100 / 2;
	cout << ret << '\n';
	return 0;
}