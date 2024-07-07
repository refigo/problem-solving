#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int cnt_same_front_back;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m >> k;
	cout << min(m, k) + min (n - m, n - k);
	return 0;
}