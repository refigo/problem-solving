#include <bits/stdc++.h>
using namespace std;
int s, m, l;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s >> m >> l;
	if (s + m * 2 + l * 3 >= 10) cout << "happy";
	else cout << "sad";
	return 0;
}