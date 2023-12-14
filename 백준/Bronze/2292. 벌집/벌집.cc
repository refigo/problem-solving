#include "bits/stdc++.h"
using namespace std;
long long n;
long long sum;
int ret;
int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	if (n == 1) {
		cout << 1 << "\n";
		return 0;
	}
	sum = 1;
	for (int i = 1; ; i++) {
		sum += i * 6;
		if (n <= sum) {
			ret = i + 1;
			break;
		}
	}
	cout << ret << "\n";
	return 0;
}