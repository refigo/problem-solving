#include <bits/stdc++.h>
using namespace std;
string s;
int num[3];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}
	sort(num, num + 3);
	cin >> s;
	for (int i = 0; i < 3; i++) {
		if (s[i] == 'A') cout << num[0] << ' ';
		else if (s[i] == 'B') cout << num[1] << ' ';
		else cout << num[2] << ' ';
	}
	return 0;
}