#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> s;
	if (s == "fdsajkl;" || s == "jkl;fdsa") cout << "in-out";
	else if (s == "asdf;lkj" || s == ";lkjasdf") cout << "out-in";
	else if (s == "asdfjkl;") cout << "stairs";
	else if (s == ";lkjfdsa") cout << "reverse";
	else cout << "molu";
	return 0;
}