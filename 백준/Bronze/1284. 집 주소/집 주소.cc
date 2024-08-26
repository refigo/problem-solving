#include <bits/stdc++.h>
using namespace std;
string num;
int panel_size;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	while (true) {
		cin >> num;
		if (num == "0") break;
		panel_size = 1;
		for (int i = 0; i < num.size(); i++) {
			if (num[i] == '0') panel_size += 4;
			else if (num[i] == '1') panel_size += 2;
			else panel_size += 3;
			panel_size++;
		}
		cout << panel_size << '\n';
	}
	return 0;
}