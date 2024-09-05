#include <bits/stdc++.h>
using namespace std;
int n0;
int case_num;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (1) {
		++case_num;
		cin >> n0;
		if (n0 == 0) break;
		int n1 = 3 * n0;
		if (n1 % 2 == 0) {
			n1 /= 2;
			cout << case_num << ". even ";
		}
		else {
			n1 = (n1 + 1) / 2;
			cout << case_num << ". odd ";
		}
		int n3 = 3 * n1;
		int n4 = n3 / 9;
		cout << n4 << '\n';
	}
	return 0;
}