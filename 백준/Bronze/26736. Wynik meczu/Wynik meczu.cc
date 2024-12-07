#include <bits/stdc++.h>
using namespace std;
string s;
int a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') a++;
		else b++;
	}
	cout << a << " : " << b;
	return 0;
}