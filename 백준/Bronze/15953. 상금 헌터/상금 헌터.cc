#include <bits/stdc++.h>
using namespace std;
int t, a, b, prize;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a == 0) prize = 0;
		else if (a == 1) prize = 5000000;
		else if (a <= 3) prize = 3000000;
		else if (a <= 6) prize = 2000000;
		else if (a <= 10) prize = 500000;
		else if (a <= 15) prize = 300000;
		else if (a <= 21) prize = 100000;
		else prize = 0;
		if (b == 0) prize += 0;
		else if (b == 1) prize += 5120000;
		else if (b <= 3) prize += 2560000;
		else if (b <= 7) prize += 1280000;
		else if (b <= 15) prize += 640000;
		else if (b <= 31) prize += 320000;
		cout << prize << '\n';
	}
	return 0;
}