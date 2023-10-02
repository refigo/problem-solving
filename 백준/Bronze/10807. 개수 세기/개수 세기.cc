#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
int n;
int each;
int v;
int ans;
int main(){
	cin >> n;
	vec.resize(n);
	for (int i = 0; i < n; ++i){
		cin >> each;
		vec[i] = each;
	}
	cin >> v;
	for (int there : vec) {
		if (there == v)
			++ans;
	}
	cout << ans << '\n';
	return 0;
}