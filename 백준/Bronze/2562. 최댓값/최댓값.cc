#include <bits/stdc++.h>
using namespace std;
int max_num = INT_MIN;
int n;
int ans;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	for (int i = 1; i <= 9; ++i) {
		cin >> n;
		if (n > max_num) {
			max_num = n;
			ans = i;
		}
	}
	cout << max_num << '\n';
	cout << ans << '\n';
	return 0;
}