#include <bits/stdc++.h>
using namespace std;
string s;
int n, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 4; i++) {
		cin >> s >> n;
		if (s == "Es") {
			ret += n * 21;	
		} else {
			ret += n * 17;
		}
	}
	cout << ret;
	return 0;
}