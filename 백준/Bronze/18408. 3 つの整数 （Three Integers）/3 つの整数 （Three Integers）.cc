#include <bits/stdc++.h>
using namespace std;
int a[3];
int cnt[2];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
		if (a[i] == 1) cnt[0]++;
		else cnt[1]++;
	}
	if (cnt[0] > cnt[1]) cout << "1";
	else cout << "2";
	return 0;
}