#include <bits/stdc++.h>
using namespace std;
int n, sum, sum_squared;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> n;
	sum = n * (n + 1) / 2;
	sum_squared = sum * sum;
	cout << sum << '\n';
	cout << sum_squared << '\n';
	cout << sum_squared << '\n';
	return 0;
}