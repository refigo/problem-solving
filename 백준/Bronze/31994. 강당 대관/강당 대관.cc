#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int max_n;
string max_s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 7; i++) {
		cin >> s >> n;
		if (n > max_n) {
			max_n = n;
			max_s = s;
		}
	}
	cout << max_s;
	return 0;
}