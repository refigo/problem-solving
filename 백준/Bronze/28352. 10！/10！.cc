#include <bits/stdc++.h>
using namespace std;
unsigned long long seconds = 1;
int n;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = n; i > 0; i--) {
		seconds *= i;
	}
	int seconds_of_one_week = 24 * 60 * 60 * 7;
	cout << seconds / seconds_of_one_week << '\n';
	return 0;
}