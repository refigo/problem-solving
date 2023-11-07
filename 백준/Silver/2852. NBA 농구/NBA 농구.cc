#include <bits/stdc++.h>
using namespace std;

int n;
int t;
string s;
int wst;
int as, bs;
int asum, bsum;
string prev_s;

void print_sec_to_form(int sec) {
	string min_str = "00" + to_string(sec / 60);
	string sec_str = "00" + to_string(sec % 60);
	cout << min_str.substr(min_str.length() - 2, 2) 
		 << ':' 
		 << sec_str.substr(sec_str.length() - 2, 2)
		 << '\n';
}

int get_to_sec(string& str) {
	return atoi(str.substr(0, 2).c_str()) * 60 + atoi(str.substr(3, 2).c_str());
}

void go(int& sum, string cur) {
	sum += get_to_sec(cur) - get_to_sec(prev_s);
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> t >> s;
		if (wst == 1) {
			go(asum, s);
		} else if (wst == 2) {
			go(bsum, s);
		}
		(t == 1) ? ++as : ++bs;
		(as == bs) ? wst = 0 : (as > bs ? wst = 1 : wst = 2);
		prev_s = s;
	}
	if (wst == 1) {
		go(asum, "48:00");
	} else if (wst == 2) {
		go(bsum, "48:00");
	}
	print_sec_to_form(asum);
	print_sec_to_form(bsum);
	return 0;
}