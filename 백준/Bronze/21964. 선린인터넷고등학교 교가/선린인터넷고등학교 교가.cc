#include <bits/stdc++.h>
using namespace std;
int n;
string last_five;
char c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (i >= n - 5) last_five += c;
	}
	cout << last_five << '\n';
	return 0;
}