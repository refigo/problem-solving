#include <bits/stdc++.h>
using namespace std;
int n, trim, num, cnt, sum;
map<int, int> mp;
priority_queue<int> pq;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	if (n == 0) {
		cout << 0 << '\n';
		return 0;
	}
	// cout << (float)n << '\n';
	// cout << float(15) / float(100) << '\n';
	trim = round((float)(n) * float(15) / float(100));
	for (int i = 0; i < n; i++) {
		cin >> num;
		// mp[num]++;
		pq.push(num);
	}
	for (int i = 0; i < n; i++) {
		if (i >= trim && i < n - trim) {
			sum += pq.top();
		}
		pq.pop();
	}
	// cout << sum << '\n';
	// cout << (n - (2 * trim)) << '\n';
	cout << round(float(sum) / float(n - (2 * trim))) << '\n';
	// for (auto each : pq) {
	// 	cout << each << '\n';
	// }
	// int tmp = 0;
	// int sum = 0;
	// for (auto each : mp) {
	// 	tmp = each.second;
	// 	if (cnt + tmp <= trim || cnt >= n - trim) {
	// 		cnt += tmp;
	// 	} else {
	// 		cnt > trim -= 
	// 		if (cnt < trim) {
	// 			sum += each.first * (cnt + tmp - trim);
	// 		} else {
	// 			sum += each.first * tmp;
	// 		}
	// 		cnt += tmp;
	// 	}
	// 	// if (cnt + tmp > trim && cnt + tmp < n - trim) {
			
	// 	// }
	// }
	// cout << sum << '\n';
	// cout << (float(sum) / float(n - (2 * trim))) << '\n';
	return 0;
}