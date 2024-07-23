#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int score_a = 100, score_b = 100;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		if (a > b) score_b -= a;
		else if (a < b) score_a -= b;
	}
	cout << score_a << '\n' << score_b;
	return 0;
}