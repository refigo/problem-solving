#include <bits/stdc++.h>
using namespace std;
int a, b, c;
char char_plus, char_equal;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> a >> char_plus >> b >> char_equal >> c;
	if (a + b == c) cout << "YES";
	else cout << "NO";
	return 0;
}