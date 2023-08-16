#include <bits/stdc++.h>
using namespace std;
string ss;
vector<int> v('z' - 'a' + 1, 0);
int main(){
	cin >> ss;
	for (auto a : ss){
		v[a - 'a'] += 1;
	}
	for (auto a : v){
		cout << a << ' ';
	}
	return 0;
}
