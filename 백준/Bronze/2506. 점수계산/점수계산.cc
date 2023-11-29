#include <bits/stdc++.h>
using namespace std;
int n, each, ret;
vector<int> v;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	v.reserve(n);
	for (int i = 0; i < n; ++i) {
		cin >> each;
		if (each == 0) {
			v.push_back(0);
		} else {
			if (i == 0) {
				v.push_back(1);
			} else {
				v.push_back(v[i - 1] + 1);
			}
		}
	}
	for (int ea : v) {
		ret += ea;
	}
	cout << ret << "\n";
	return 0;
}