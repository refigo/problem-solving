#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "Poblano") {
			ret += 1500;
		} else if (s == "Mirasol") {
			ret += 6000;
		} else if (s == "Serrano") {
			ret += 15500;
		} else if (s == "Cayenne") {
			ret += 40000;
		} else if (s == "Thai") {
			ret += 75000;
		} else if (s == "Habanero") {
			ret += 125000;
		}
	}
	cout << ret;
	return 0;
}