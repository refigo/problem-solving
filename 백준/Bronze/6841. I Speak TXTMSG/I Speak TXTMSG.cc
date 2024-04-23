#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
    std::unordered_map<std::string, std::string> translation = {
        {"CU", "see you"},
        {":-)", "I’m happy"},
        {":-(", "I’m unhappy"},
        {";-)", "wink"},
        {":-P", "stick out my tongue"},
        {"(~.~)", "sleepy"},
        {"TA", "totally awesome"},
        {"CCC", "Canadian Computing Competition"},
        {"CUZ", "because"},
        {"TY", "thank-you"},
        {"YW", "you’re welcome"},
        {"TTYL", "talk to you later"}
    };
	cin >> s;
	while (s != "TTYL") {
		if (translation.find(s) != translation.end()) {
			cout << translation[s] << '\n';
		} else {
			cout << s << '\n';
		}
		cin >> s;
	}
	cout << "talk to you later" << '\n';
	return 0;
}