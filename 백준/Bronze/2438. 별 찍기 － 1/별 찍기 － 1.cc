#include <bits/stdc++.h>
using namespace std;
int n;
string stars;
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		stars += '*';
		cout << stars << '\n';
	}
	return 0;
}