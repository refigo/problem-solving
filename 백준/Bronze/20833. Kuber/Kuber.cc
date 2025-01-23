#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	long long ret = 0;
	for (int i = 1; i <= n; i++) {
		ret += pow(i, 3);
	}
	cout << ret;
	return 0;
}