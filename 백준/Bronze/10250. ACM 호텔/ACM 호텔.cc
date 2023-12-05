#include <bits/stdc++.h>
using namespace std;
int t, h, w, n;
string s, w_s;
int h_i;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--) {
		cin >> h >> w >> n;
		h_i = n % h;
		if (n % h == 0)
			h_i = h;
		s = to_string(h_i);
		w_s = to_string((int)((n - 1) / h) + 1);
		if (w_s.length() <= 1) {
			s += '0';
		}
		s += w_s;
		cout << s << '\n';
		s.clear();
		w_s.clear();
	}
	return 0;
}