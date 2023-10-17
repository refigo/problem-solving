#include <bits/stdc++.h>
using namespace std;

int n;
int a[1004];
int each;
int max_num = -1;
int sum;
float ret;

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> each;
		a[i] = each;
		sum += each;
		if (max_num < each)
			max_num = each;
	}
	ret = ((float)sum / n) / max_num * 100;
	cout << ret << '\n';
	return 0;
}