#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> a >> b;
	float ret = (float)a * b;
	ret /= (5 * 4840);
	ret = ceil(ret);
	cout << fixed << setprecision(0) << ret;
	return 0;
}