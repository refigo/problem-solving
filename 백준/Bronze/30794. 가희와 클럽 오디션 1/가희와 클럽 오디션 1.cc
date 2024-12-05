#include <bits/stdc++.h>
using namespace std;
int lv, ret;
string decision;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> lv >> decision;
	ret = lv;
	if (decision == "miss") {
		ret *= 0;
	} else if (decision == "bad") {
		ret *= 200;
	} else if (decision == "cool") {
		ret *= 400;
	} else if (decision == "great") {
		ret *= 600;
	} else if (decision == "perfect") {
		ret *= 1000;
	}
	cout << ret;
	return 0;
}