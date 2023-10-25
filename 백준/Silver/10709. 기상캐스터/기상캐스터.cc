#include <bits/stdc++.h>
using namespace std;

int h, w;
string s;
int ret[104][104];

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> h >> w;
	for (int i = 0; i < h; i++){
		cin >> s;
		for (int j = 0; j < w; j++){
			if (s[j] != 'c') {
				ret[i][j] = -1;
			}
		}
	}
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			if (ret[i][j] == 0) {
				int cnt = 1;
				while (ret[i][j + 1] == -1) {
					ret[i][j + 1] = cnt++;
					++j;
				}
			}
		}
	}
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			cout << ret[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}