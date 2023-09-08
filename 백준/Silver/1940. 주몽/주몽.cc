#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v;
int ans;
int main() {
	cin >> n >> m;
	v.reserve(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	if (m < 200000) {
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (v[i] + v[j] == m)
					++ans;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
