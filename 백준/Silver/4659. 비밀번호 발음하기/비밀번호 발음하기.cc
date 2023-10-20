#include <bits/stdc++.h>
using namespace std;

string pw;
bool flag_aeiou;
int seq_cnt;
char prev_char;
bool prev_aeiou_flag;
bool flag_dup;
bool acceptable;
int len;

vector<string> v;
map<string, bool> m;

bool is_aeiou(char c) {
	if (c == 'a' || c == 'e' 
	 || c == 'i' || c == 'o'
	 || c == 'u') {
		return true;
	 }
	 return false;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	while (1){
		cin >> pw;
		if (pw == "end") {
			break;
		}
		acceptable = true;
		flag_aeiou = false;
		seq_cnt = 0;
		prev_char = 'Z';
		prev_aeiou_flag = false;
		flag_dup = false;
		len = pw.length();
		for (int i = 0; i < len; i++){
			if (flag_aeiou == false) {
				flag_aeiou = is_aeiou(pw[i]);
			}
			if (i != 0 &&
			is_aeiou(pw[i]) == prev_aeiou_flag) {
				++seq_cnt;
			} else {
				seq_cnt = 1;
			}
			if (seq_cnt >= 3) {
				break;
			}
			if (pw[i] != 'e' && pw[i] != 'o') {
				if (prev_char == pw[i]) {
					flag_dup = true;
					break ;
				}
			}
			prev_aeiou_flag = is_aeiou(pw[i]);
			prev_char = pw[i];
		}
		if (flag_aeiou == false
		 || seq_cnt >= 3
		 || flag_dup == true) {
			acceptable = false;
		}
		v.push_back(pw);
		m.insert({pw, acceptable});
	}
	for (auto str : v) {
		cout << '<' << str << '>' << " is ";
		if (m[str] == true) {
			cout << "acceptable.\n";
		} else {
			cout << "not acceptable.\n";
		}
	}
	return 0;
}