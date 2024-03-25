#include <bits/stdc++.h>
using namespace std;
int n, total;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 4; i++) {
		cin >> n;
		total += n;
	}
	cout << total / 60 << '\n' << total % 60 << '\n';
	return 0;
}