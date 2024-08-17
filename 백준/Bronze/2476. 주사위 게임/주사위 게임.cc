#include <bits/stdc++.h>
using namespace std;
int n;
int dice[3];
int sum;
int mx;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> dice[0] >> dice[1] >> dice[2];
		sort(dice, dice + 3);
		if (dice[0] == dice[1] && dice[1] == dice[2]) sum = 10000 + dice[0] * 1000;
		else if (dice[0] == dice[1] || dice[1] == dice[2]) sum =  1000 + dice[1] * 100;
		else sum = dice[2] * 100;
		mx = max(mx, sum);
	}
	cout << mx;
	return 0;
}