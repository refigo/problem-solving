#include <bits/stdc++.h>
using namespace std;
int num_multitab;
int num_each;
int sum_plug_can;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> num_multitab;
	for (int i = 0; i < num_multitab; i++) {
		cin >> num_each;
		sum_plug_can += num_each;
	}
	cout << sum_plug_can - num_multitab + 1;
	return 0;
}