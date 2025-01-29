#include <bits/stdc++.h>
using namespace std;
int n;
char chr;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> chr;
		if ('a' <= chr && chr <= 'z') cout << (char)(chr - 'a' + 'A');
		else cout << (char)(chr - 'A' + 'a');
	}
	return 0;
}