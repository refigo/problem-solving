#include <bits/stdc++.h>
using namespace std;
int n;
char hellobit;
char friends[10004];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> friends[i];
	}
	cin >> hellobit;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (friends[i] == hellobit) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}