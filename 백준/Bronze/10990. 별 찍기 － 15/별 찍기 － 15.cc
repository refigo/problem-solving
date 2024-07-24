#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) cout << ' ';
		
		for (int j = 1; j <= 2 * i - 1; j++) {
			if (j == 1 || j == 2 * i - 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}