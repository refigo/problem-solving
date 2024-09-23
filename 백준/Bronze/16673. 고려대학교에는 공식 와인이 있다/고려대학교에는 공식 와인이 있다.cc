#include <bits/stdc++.h>
using namespace std;
int c, k, p;
int sum_collected_wine;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> c >> k >> p;
	for (int i = 1; i <= c; i++) {
		sum_collected_wine += k * i + p * i * i;
	}
	cout << sum_collected_wine;
	return 0;
}