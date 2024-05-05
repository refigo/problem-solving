#include <bits/stdc++.h>
using namespace std;
int n;
string name;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name;
		for (int j = 0; j < name.size(); j++) {
			if (name[j] >= 'A' && name[j] <= 'Z') {
				name[j] = name[j] - 'A' + 'a';
			}
		}
		cout << name << '\n';
	}
	return 0;
}