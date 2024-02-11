#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin >> s;
	for (auto each : s) {
		if ('a' <= each && each <= 'z')
			cout << char(toupper(each));
		else
			cout << char(tolower(each));
	}
	cout << '\n';
	return 0;
}