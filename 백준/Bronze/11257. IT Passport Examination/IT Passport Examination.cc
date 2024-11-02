#include <bits/stdc++.h>
using namespace std;
int n, number, strategy_score, management_score, technology_score;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> number;
		cin >> strategy_score >> management_score >> technology_score;
		bool flag = false;
		int total_score = strategy_score + management_score + technology_score;
		if (total_score >= 55 
		&& ((strategy_score * 100) / 35 >= 30) 
		&& ((management_score * 100) / 25 >= 30) 
		&& ((technology_score * 100) / 40 >= 30)) {
			flag = true;
		}
		cout << number << " ";
		cout << total_score << " ";
		cout << (flag ? "PASS" : "FAIL") << '\n';
	}
	return 0;
}