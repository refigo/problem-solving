#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[9];
bool visited[9];
void go_backtracking(int idx, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i + 1;
			go_backtracking(i, cnt + 1);
			visited[i] = false;
		}
	}
}
int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	go_backtracking(0, 0);
	return 0;
}