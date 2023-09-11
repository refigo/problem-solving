#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main() {
	while (scanf("%lld", &n) != EOF) {
		ll cand = 1, cnt = 1;
		while (cand % n != 0) {
			cand = (cand * 10 + 1) % n;
			++cnt;
		}
		cout << cnt << '\n';
	}
	return 0;
}
