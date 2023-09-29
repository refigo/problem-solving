#include <bits/stdc++.h>
using namespace std;
int n;
string stars;
int main() {
	cin.tie(NULL), cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j)
			cout << ' ';
		stars += '*';
		cout << stars << '\n';
	}
	return 0;
}