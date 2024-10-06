#include <bits/stdc++.h>
using namespace std;
int n;
string computer_name;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> computer_name;
		cout << "String #" << i << '\n';
		for (int j = 0; j < computer_name.size(); j++) {
			if (computer_name[j] == 'Z') cout << 'A';
			else cout << (char)(computer_name[j] + 1);
		}
		cout << '\n' << '\n';
	}
	return 0;
}