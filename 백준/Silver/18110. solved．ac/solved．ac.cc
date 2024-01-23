#include <bits/stdc++.h>
using namespace std;
int n, trim, num, sum;
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
	trim = round((float)(n) * float(15) / float(100));
	for (int i = 0; i < n; i++) {
		cin >> num;
		pq.push(num);
	}
	for (int i = 0; i < n; i++) {
		if (i >= trim && i < n - trim) {
			sum += pq.top();
		}
		pq.pop();
	}
	cout << round(float(sum) / float(n - (2 * trim))) << '\n';
	return 0;
}