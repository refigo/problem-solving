#include <bits/stdc++.h>
using namespace std;
int each;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 5; ++i) {
		cin >> each;
		ret += each;
	}
	cout << ret << '\n';
	return 0;
}