#include <bits/stdc++.h>
using namespace std;
int n, a, b;
struct comp {
	bool operator() (const pair<int, int>& p1, const pair<int, int>& p2) const {
		if (p1.second == p2.second) {
			return (p1.first < p2.first);
		}
		return (p1.second < p2.second);
	}
};
set<pair<int, int>, comp> st;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> a >> b;
		st.insert({a, b});
	}
	for (auto there : st) {
		cout << there.first << " " << there.second << "\n";
	}
	return 0;
}