#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[54][54];
vector<pair<int, int>> vc;
vector<pair<int, int>> vh;
vector<int> vhdist;
vector<int> vci;
int ret = INT_MAX;
int check(vector<int>& vci) {
	int chk_dist = 0;
	pair<int, int> cp;

	for (int idx : vci) {
		cp = vc[idx];
		for (int i = 0; i < vh.size(); i++) {
			int tmp_dist = 0;
			tmp_dist += abs(vh[i].first - cp.first);
			tmp_dist += abs(vh[i].second - cp.second);
			vhdist[i] = min(vhdist[i], tmp_dist);
		}
	}
	for (int edist : vhdist) {
		chk_dist += edist;
	}
	for (int i = 0; i < vh.size(); i++) {
		vhdist[i] = 100;
	}
	return chk_dist;
}
void go(int start, vector<int>& vci) {
	if (vci.size() > m) {
		return ;
	} else {
		ret = min(ret, check(vci));
	}
	for (int i = start + 1; i < vc.size(); i++) {
		vci.push_back(i);
		go(i, vci);
		vci.pop_back();
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 2)
				vc.push_back({i, j});
			if (a[i][j] == 1)
				vh.push_back({i, j});
		}
	}
	for (int i = 0; i < vh.size(); i++) {
		vhdist.push_back(100);
	}
	go(-1, vci);
	cout << ret << "\n";
	return 0;
}