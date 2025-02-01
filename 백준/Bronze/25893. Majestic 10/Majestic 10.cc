#include <bits/stdc++.h>
using namespace std;
int n;
int a[3];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			cin >> a[j];
			if (a[j] >= 10) cnt++;
			cout << a[j] << " ";
		}
		cout << '\n';
		if (cnt >= 3) cout << "triple-double" << '\n';
		else if (cnt == 2) cout << "double-double" << '\n';
		else if (cnt == 1) cout << "double" << '\n';
		else cout << "zilch" << '\n';
		cout << '\n';
	}
	return 0;
}