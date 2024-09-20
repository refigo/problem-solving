#include <bits/stdc++.h>
using namespace std;
int x, y;
int min_time;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> x >> y;
	min_time = x > y ? x + y : y - x;
	cout << min_time;
	return 0;
}