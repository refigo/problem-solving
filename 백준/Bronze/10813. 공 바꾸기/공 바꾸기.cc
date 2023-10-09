#include <bits/stdc++.h>
using namespace std;
vector<int> v(104);
int n, m;
int i, j;
void print_v(){
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
	return ;
}
void swap(int idx, int jdx){
	int tmp = v[idx];
	v[idx] = v[jdx];
	v[jdx] = tmp;
	return ;
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		v[i - 1] = i;
	}
	while (m--) {
		cin >> i >> j;
		swap(i - 1, j - 1);
	}
	print_v();
	cout << '\n';
	return 0;
}