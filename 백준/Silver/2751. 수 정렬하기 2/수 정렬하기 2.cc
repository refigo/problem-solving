#include <bits/stdc++.h>
using namespace std;
int n, a;
set<int> s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> a;
		s.insert(a);
	}
	for (int there : s) {
		cout << there << "\n";
	}
	return 0;
}