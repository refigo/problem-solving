#include <bits/stdc++.h>
using namespace std;
long long n;
const string s = "SciComLove";
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	if (n % 2 == 0) {
		cout << s;
	} else {
		for (int i = s.size() - 1; i >= 0; i--) {
			cout << s[i];
		}
	}
	return 0;
}