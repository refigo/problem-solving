#include <bits/stdc++.h>
using namespace std;
long long n, result;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	result = n % 8;
	if (result == 1) cout << 1;
	else if (result == 2 || result == 0) cout << 2;
	else if (result == 3 || result == 7) cout << 3;
	else if (result == 4 || result == 6) cout << 4;
	else cout << 5;
	return 0;
}