#include <bits/stdc++.h>
using namespace std;
int n;
string name;
string ret;
bool found = false;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name;
		if (found) continue;
		if (name.find('S') != string::npos) {
			ret = name;
			found = true;
		}
	}
	cout << ret;
	return 0;
}