#include <bits/stdc++.h>
using namespace std;
int tiles;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> tiles;
	cout << "The largest square has side length " << (int)sqrt(tiles) << ".\n";
	return 0;
}