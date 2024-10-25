#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	int s_h, s_m, s_s;
	scanf("%02d:%02d:%02d", &s_h, &s_m, &s_s);
	int d_h, d_m, d_s;
	scanf("%02d:%02d:%02d", &d_h, &d_m, &d_s);
	int s = s_h * 3600 + s_m * 60 + s_s;
	int d = d_h * 3600 + d_m * 60 + d_s;
	if (s > d) d += 24 * 3600;
	int ans = d - s;
	if (ans == 0) ans = 24 * 3600;
	printf("%02d:%02d:%02d\n", ans / 3600, (ans % 3600) / 60, ans % 60);
	return 0;
}