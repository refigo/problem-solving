#include <bits/stdc++.h>
using namespace std;
int wook, je;
double wookje;
double wookje_prob;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> wook >> je;
	wookje = (je - wook) / 400.0;
	wookje_prob = 1 / (1 + pow(10, wookje));
	cout << wookje_prob;
	return 0;
}