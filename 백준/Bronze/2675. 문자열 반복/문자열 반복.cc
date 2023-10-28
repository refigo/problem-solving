#include <bits/stdc++.h>
using namespace std;

int t;
int r;
string s;
string tmp_str;
string p;

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> t;
	while (t--){
		cin >> r >> s;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < r; j++)
				tmp_str += s[i];
			p += tmp_str;
			tmp_str.clear();
		}
		cout << p << "\n";
		p.clear();
	}
	return 0;
}