#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;

ll mul_with_modulo_recur(ll a, ll b) {
	ll ret;
	if (b == 1)
		return a % c;
	ret = mul_with_modulo_recur(a, b / 2);
	ret = (ret * ret) % c;
	if (b % 2)
		ret = (ret * a) % c;
	return ret;
}

int main() {
	cin >> a >> b >> c;
	cout << mul_with_modulo_recur(a, b) << '\n';
	return 0;
}
