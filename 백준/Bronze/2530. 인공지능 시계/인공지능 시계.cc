#include <bits/stdc++.h>
using namespace std;
int h, m, s;
int time_to_cook;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> h >> m >> s >> time_to_cook;
	s += time_to_cook;
	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
	h %= 24;
	cout << h << ' ' << m << ' ' << s;
	return 0;
}