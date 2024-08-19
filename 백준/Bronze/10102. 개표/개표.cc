#include <bits/stdc++.h>
using namespace std;
int v, cnt_a, cnt_b;
char c;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> v;
	while (v--) {
		cin >> c;
		if (c == 'A') cnt_a++;
		else cnt_b++;
	}
	if (cnt_a > cnt_b) cout << "A";
	else if (cnt_a < cnt_b) cout << "B";
	else cout << "Tie";
	return 0;
}