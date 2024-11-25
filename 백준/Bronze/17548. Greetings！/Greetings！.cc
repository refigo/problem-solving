#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'e') cnt++;
	}
	cout << "h";
	for (int i = 0; i < cnt * 2; i++) cout << "e";
	cout << "y";
	return 0;
}