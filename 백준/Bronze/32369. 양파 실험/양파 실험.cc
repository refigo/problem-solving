#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int len_ching = 1, len_binan = 1;
bool flag = false;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++) {
		len_ching += a;
		len_binan += b;
		if (len_binan > len_ching) {
			int temp = len_ching;
			len_ching = len_binan;
			len_binan = temp;
		}
		if (len_ching == len_binan) {
			len_binan -= 1;
		}
	}
	cout << len_ching << ' ' << len_binan;
	return 0;
}