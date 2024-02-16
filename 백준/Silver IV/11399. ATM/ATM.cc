#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n, tmp, ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	tmp = n;
	for (int i = 0; i < n; i++) {
		ret += v[i] * tmp--;
	}
	cout << ret << '\n';
	return 0;
}