#include <bits/stdc++.h>
using namespace std;
int n, k, a;
vector<int> v;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	v.reserve(n);
	while (n--) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v[k - 1] << '\n';
	return 0;
}