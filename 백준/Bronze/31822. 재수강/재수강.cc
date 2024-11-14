#include <bits/stdc++.h>
using namespace std;
string to_jaesugang;
int n;
int cnt;
string tmp;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> to_jaesugang;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		bool flag = true;
		for (int j = 0; j < 5; j++) {
			if (to_jaesugang[j] != tmp[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}