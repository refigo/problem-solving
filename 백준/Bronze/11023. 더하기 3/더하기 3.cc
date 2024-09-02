#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	getline(cin, s);
	// sum number between two space
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') continue;
		int j = i;
		while (j < s.size() && s[j] != ' ') j++;
		int num = 0;
		for (int k = i; k < j; k++) {
			num = num * 10 + s[k] - '0';
		}
		sum += num;
		i = j;
	}
	cout << sum;
	return 0;
}