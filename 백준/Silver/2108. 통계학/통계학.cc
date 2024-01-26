#include <bits/stdc++.h>
using namespace std;
int n, num, sum, mn = INT_MAX, mx = INT_MIN;
int arr[8004];
vector<int> v;
vector<int> much_v;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[num + 4000]++;
		sum += num;
		v.push_back(num);
		if (num < mn) mn = num;
		if (num > mx) mx = num;
	}
	sort(v.begin(), v.end());
	int much = -1;
	for (int i = 1; i <= 8000; i++) {
		if (arr[i] > much) much = arr[i];
	}
	for (int i = 0; i <= 8000; i++) {
		if (arr[i] == much) much_v.push_back(i - 4000);
	}
	int much_value = 0;
	much_value = much_v.size() > 1 ? much_v[1] : much_v[0];
	int first_ret = round((float)sum / (float)n);
	if (first_ret == -0) first_ret = 0;
	cout << first_ret << '\n';
	cout << v[v.size() / 2] << '\n';
	cout << much_value << '\n';
	cout << mx - mn << '\n';
	return 0;
}