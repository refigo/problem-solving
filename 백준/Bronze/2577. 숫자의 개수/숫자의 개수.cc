#include <bits/stdc++.h>
using namespace std;
int input;
int sum = 1;
string s;
int a[14];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 3; ++i) {
		cin >> input;
		sum *= input;
	}
	s = to_string(sum);
	for (int i = 0; i < s.length(); ++i) {
		a[s[i] - '0'] += 1;
	}
	for (int i = 0; i < 10; ++i) {
		cout << a[i] << "\n";
	}
	return 0;
}