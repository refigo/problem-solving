#include <bits/stdc++.h>
using namespace std;
long long h, i, a, r, c;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> h >> i;
	cin >> a >> r >> c;
	cout << h * i - a * r * c;
	return 0;
}