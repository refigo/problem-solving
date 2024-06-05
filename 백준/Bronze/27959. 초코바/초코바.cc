#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	cin >> n >> m;
	n * 100 >= m ? cout << "Yes" : cout << "No";
	return 0;
}