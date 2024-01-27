#include <bits/stdc++.h>
using namespace std;
int n, m, b;
int h_mn = 257, h_mx = -1;
int a[504][504];
map<int, int> mp;
vector<int> ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (h_mn > a[i][j]) h_mn = a[i][j];
			if (h_mx < a[i][j]) h_mx = a[i][j];
		}
	}
	int min_cnt = INT_MAX;
	for (int h_cur = h_mn; h_cur <= h_mx; h_cur++) {
		int tmp_b = b;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (h_cur > a[i][j]) {
					cnt += h_cur - a[i][j];
					tmp_b -= h_cur - a[i][j];
				}
				if (h_cur < a[i][j]) {
					cnt += (a[i][j] - h_cur) * 2;
					tmp_b += a[i][j] - h_cur;
				}
			}
		}
		if (tmp_b >= 0) {
			mp.insert({h_cur, cnt});
			if (min_cnt > cnt) {
				min_cnt = cnt;
			}
		}
	}
	for (auto each : mp) {
		if (each.second == min_cnt)
			ret.push_back(each.first);
	}
	cout << min_cnt << ' ' << ret.back() << '\n';
	return 0;
}