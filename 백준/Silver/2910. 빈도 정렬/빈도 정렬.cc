#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int n;
ll c;
int num;
ll a[1004];
map<ll, int> m;
list<ll> ret;

int main() {
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		auto here = m.find(a[i]);
		if (here != m.end())
			continue;
		int cnt;
		cnt = count(&a[0], &a[n], a[i]);
		m[a[i]] = cnt;
		list<ll>::iterator iter = ret.begin();
		for (; iter != ret.end(); ++iter) {
			if (m[*iter] < cnt) {
				ret.insert(iter, a[i]);
				break ;
			}
		}
		if (iter == ret.end()) {
			ret.push_back(a[i]);
		}
	}
	for (ll each : ret) {
		int cnt = m[each];
		while (cnt--) {
			cout << each << ' ';
		}
	}
	cout << '\n';
	return 0;
}