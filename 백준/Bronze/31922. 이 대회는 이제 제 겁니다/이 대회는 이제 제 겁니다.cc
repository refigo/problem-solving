#include <bits/stdc++.h>
using namespace std;
int a, p, c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> p >> c;
	cout << max(a + c, p);
	return 0;
}