#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int max_team_count;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> m >> k;
	max_team_count = min(n / 2, m);
	k -= n + m - max_team_count * 3;
	while (k > 0) {
		k -= 3;
		max_team_count--;
	}
	cout << max_team_count;
	return 0;
}