#include <bits/stdc++.h>
using namespace std;
int p;
char pixel_color;
string s;
string ret;
bool is_found = false;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	for (int i = 0; i < 15; i++) {
		getline(cin, s);
		for (char pixel_color : s) {
			if (is_found) {
				continue;
			}
			if (pixel_color == 'w' || pixel_color == 'b' || pixel_color == 'g') {
				is_found = true;
				if (pixel_color == 'w') {
					ret = "chunbae";
				} else if (pixel_color == 'b') {
					ret = "nabi";
				} else if (pixel_color == 'g') {
					ret = "yeongcheol";
				}
			}
		}
	}
	if (is_found) {
		cout << ret;
	}
	return 0;
}