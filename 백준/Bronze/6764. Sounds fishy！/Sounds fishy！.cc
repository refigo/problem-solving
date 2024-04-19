#include <bits/stdc++.h>
using namespace std;
int fish_depth, prev_depth, flag;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 4; i++) {
		cin >> fish_depth;
		if (i == 0) {
			prev_depth = fish_depth;
		}
		else if (i == 1) {
			if (prev_depth < fish_depth) {
				flag = 0;
			}
			else if (prev_depth > fish_depth) {
				flag = 1;
			}
			else {
				flag = 2;
			}
			prev_depth = fish_depth;
		}
		else {
			if (flag == 0) {
				if (prev_depth >= fish_depth) {
					flag = 3;
				}
			}
			else if (flag == 1) {
				if (prev_depth <= fish_depth) {
					flag = 3;
				}
			}
			else if (flag == 2) {
				if (prev_depth != fish_depth) {
					flag = 3;
				}
			}
			prev_depth = fish_depth;
		}
	}
	if (flag == 0) {
		cout << "Fish Rising" << '\n';
	}
	else if (flag == 1) {
		cout << "Fish Diving" << '\n';
	}
	else if (flag == 2) {
		cout << "Fish At Constant Depth" << '\n';
	}
	else {
		cout << "No Fish" << '\n';
	}
	return 0;
}