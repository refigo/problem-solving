#include <bits/stdc++.h>
using namespace std;

int n, m;
string tmp;
vector<string> v;
map<string, int> mp;
vector<string> ans;

bool is_number(string& str){
	string::const_iterator cit = str.begin();
	while (cit != str.end() && isdigit(*cit)) ++cit;
	return (!str.empty() && cit == str.end());
}

void solve(string& input){
	int num = 0;
	if (is_number(input)) {
		num = stoi(input);
		ans.push_back(v[num - 1]);
	} else {
		ans.push_back(to_string(mp[input] + 1));
	}
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < n; ++i){
		cin >> tmp;
		v.push_back(tmp);
		mp.insert({tmp, i});
	}
	for (int i = 0; i < m; ++i){
		cin >> tmp;
		solve(tmp);
	}
	for (auto each : ans) cout << each << '\n';
	return 0;
}
