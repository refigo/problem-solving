#include <bits/stdc++.h>
using namespace std;
int n;
int a, b;
int max_num = 0;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		int temp = a * b;
		if (temp > max_num) max_num = temp;
	}
	cout << max_num;
	return 0;
}