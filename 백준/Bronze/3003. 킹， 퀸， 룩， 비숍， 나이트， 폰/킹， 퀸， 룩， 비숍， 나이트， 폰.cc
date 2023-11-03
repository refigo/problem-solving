#include <bits/stdc++.h>
using namespace std;
const int st[6] = {1, 1, 2, 2, 2, 8};
int pc[10];
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 6; i++){
		cin >> pc[i];
		cout << st[i] - pc[i] << " ";
	}
	return 0;
}