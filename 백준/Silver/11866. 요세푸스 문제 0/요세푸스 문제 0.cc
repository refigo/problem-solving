#include <bits/stdc++.h>
using namespace std;
int visited[1004];
int n, k, vcnt;
vector<int> ret;
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> k;
	int cur_idx = 1;
	int to_move = 0;
	while (vcnt < n) {
		while (visited[cur_idx]) {
			cur_idx++;
			if (cur_idx > n) {
				cur_idx = 1;
			}
		}
		to_move = k - 1;
		while (to_move) {
			cur_idx++;
			if (cur_idx > n) {
				cur_idx = 1;
			}
			while (visited[cur_idx]) {
				cur_idx++;
				if (cur_idx > n) {
					cur_idx = 1;
				}
			}
			to_move--;
		}
		ret.push_back(cur_idx);
		visited[cur_idx] = 1;
		vcnt++;
	}
	cout << "<";
	for (int i = 0; i < ret.size(); i++) {
		cout << ret[i];
		if (i != ret.size() - 1) {
			cout << ", ";
		}
	}
	cout << ">\n";
	return 0;
}