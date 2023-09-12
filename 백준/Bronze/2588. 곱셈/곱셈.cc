#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans;

int get_ten_exponent(int num) {
	int ret = 1;
	while (num) {
		ret *= 10;
		--num;
	}
	return ret;
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < 3; ++i) {
		int curr_exp = get_ten_exponent(i);
		int tmp = (m / curr_exp) % 10;
		tmp = n * tmp;
		cout << tmp << '\n';
		ans += tmp * curr_exp;
	}
	cout << ans << '\n';
	return 0;
}
