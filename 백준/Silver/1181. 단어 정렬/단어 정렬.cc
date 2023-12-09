#include <bits/stdc++.h>
using namespace std;
int n;
string s;
struct comp {
	bool operator() (const string& s1, const string& s2) const {
		int size_diff = s1.size() - s2.size();
		if (size_diff == 0)
			return (s1 < s2);
		return (size_diff < 0);
	}
};
set<string, comp> sst;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> s;
		sst.insert(s);
	}
	for (auto each : sst) cout << each << "\n";
	return 0;
}