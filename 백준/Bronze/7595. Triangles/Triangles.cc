#include <bits/stdc++.h>
using namespace std;
int triangle_size;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		cin >> triangle_size;
		if (triangle_size == 0) break;
		for (int i = 0; i < triangle_size; i++) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
	return 0;
}