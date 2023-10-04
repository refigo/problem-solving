#include <bits/stdc++.h>
using namespace std;
int n;
int each;
int ans_min = INT_MAX;
int ans_max = INT_MIN;
int main() {
	cin >> n;
	while (n--) {
		cin >> each;
		if (each < ans_min)
			ans_min = each;
		if (each > ans_max)
			ans_max = each;
	}
	cout << ans_min << ' ' << ans_max << '\n';
	return 0;
}