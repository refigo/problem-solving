#include <bits/stdc++.h>
using namespace std;
char chr;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> chr;
	if (chr == 'M') {
		cout << "MatKor";
	} else if (chr == 'W') {
		cout << "WiCys";
	} else if (chr == 'C') {
		cout << "CyKor";
	} else if (chr == 'A') {
		cout << "AlKor";
	} else if (chr == '$') {
		cout << "$clear";
	}
	return 0;
}