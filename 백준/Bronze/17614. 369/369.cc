#include <bits/stdc++.h>
using namespace std;
int n;
string num_s;
int sum_clap;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int num = 1; num <= n; num++) {
		num_s = to_string(num);
		for (int i = 0; i < num_s.size(); i++) {
			if (num_s[i] == '3' || num_s[i] == '6' || num_s[i] == '9') {
				sum_clap++;
			}
		}
	}
	cout << sum_clap << '\n';
	return 0;
}