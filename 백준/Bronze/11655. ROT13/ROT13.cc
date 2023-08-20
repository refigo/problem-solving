#include <bits/stdc++.h>
using namespace std;
string s;
int c;
int main(){
	getline(cin, s);
	for (auto& each : s){
		c = (int)each;
		if ('a' <= c && c <= 'z') {
			c += 13;
			if (c > 'z') {
				c -= 26;
			}
		} else if ('A' <= c && c <= 'Z') {
			c += 13;
			if (c > 'Z') {
				c -= 26;
			}
		}
		each = c;
	}
	cout << s << '\n';
	return 0;
}