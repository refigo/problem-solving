#include <bits/stdc++.h>
using namespace std;
int m;
int a, b;
int cups[3] = { 1, 0, 0 };
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> m;
	while (m--) {
		cin >> a >> b;
		swap(cups[a - 1], cups[b - 1]);
	}
	for (int i = 0; i < 3; i++) {
		if (cups[i] == 1) {
			cout << i + 1;
			break;
		}
	}
	return 0;
}