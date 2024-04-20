#include <bits/stdc++.h>
using namespace std;
int antenna, eyes;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> antenna >> eyes;
	if (antenna >= 3 && eyes <= 4) cout << "TroyMartian\n";
	if (antenna <= 6 && eyes >= 2) cout << "VladSaturnian\n";
	if (antenna <= 2 && eyes <= 3) cout << "GraemeMercurian\n";
	return 0;
}