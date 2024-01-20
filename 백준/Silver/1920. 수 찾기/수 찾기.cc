#include <bits/stdc++.h>
using namespace std;
set<int> st;
int n, tmp, m;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		st.insert(tmp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		if (st.find(tmp) != st.end()) {
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	}
	return 0;
}