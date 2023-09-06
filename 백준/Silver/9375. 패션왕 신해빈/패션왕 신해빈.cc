#include <bits/stdc++.h>
using namespace std;
int tc;
int n;
string cloth;
map<string, int> clothes;
vector<int> ans;

void solve(){
	long long cases = 1;
	for (auto clth : clothes){
		cases *= (static_cast<long long>(clth.second) + 1);
	}
	cases -= 1;
	ans.push_back(cases);
	clothes.clear();
}

vector<string> split(string input, string delimeter){
	vector<string> ret;
	long long pos = 0;
	string token;
	while ((pos = input.find(delimeter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimeter.length());
	}
	ret.push_back(input);
	return ret;
}

int main(){
	cin >> tc;
	for (int i = 0; i < tc; ++i){
		cin >> n;
		cin.ignore();
		for (int j = 0; j < n; ++j) {
			vector<string> tmp_split;
			getline(cin, cloth);
			tmp_split = split(cloth, " ");
			clothes[tmp_split[1]] += 1;
		}
		solve();
	}
	for (auto each : ans) cout << each << '\n';
	return 0;
}