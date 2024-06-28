#include <bits/stdc++.h>
using namespace std;
pair<int, int> square_a, square_b, square_c, square_d;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> square_a.first >> square_a.second;
	cin >> square_b.first >> square_b.second;
	cin >> square_c.first >> square_c.second;
	if (square_a.first == square_b.first) {
		square_d.first = square_c.first;
	}
	else if (square_a.first == square_c.first) {
		square_d.first = square_b.first;
	}
	else {
		square_d.first = square_a.first;
	}
	if (square_a.second == square_b.second) {
		square_d.second = square_c.second;
	}
	else if (square_a.second == square_c.second) {
		square_d.second = square_b.second;
	}
	else {
		square_d.second = square_a.second;
	}
	cout << square_d.first << " " << square_d.second;
	return 0;
}