#include <bits/stdc++.h>
using namespace std;
int t;
string s;
bool alphabet[26];
int sum;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> s;
		memset(alphabet, false, sizeof(alphabet));
		for (int i = 0; i < s.size(); i++) {
			alphabet[s[i] - 'A'] = true;
		}
		sum = 0;
		for (int i = 0; i < 'Z' - 'A' + 1; i++) {
			if (!alphabet[i]) {
				sum += i + 'A';
			}
		}
		cout << sum << '\n';
	}
	return 0;
}