#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	cout << max(a+b, a-b) << '\n';
	cout << min(a+b, a-b) << '\n';
	return 0;
}