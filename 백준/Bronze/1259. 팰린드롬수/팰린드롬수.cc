#include <bits/stdc++.h>
using namespace std;
int input;
string s;
string rs;
int rn;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (true) {
		cin >> input;
		if (input == 0)
			break ;
		s = to_string(input);
		rs.reserve(s.length());
		for (auto ri = s.rbegin(); ri != s.rend(); ++ri) {
			rs += *ri;
		}
		rn = atoi(rs.c_str());
		if (input != rn)
			cout << "no\n";
		else 
			cout << "yes\n";
		s.clear();
		rs.clear();
	}
	return 0;
}