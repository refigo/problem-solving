#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int i, j;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> s >> i >> j;	
		for (int k = i; k < j; k++) {
			s.erase(s.begin() + i);
		}
		cout << s << '\n';
	}
	return 0;
}