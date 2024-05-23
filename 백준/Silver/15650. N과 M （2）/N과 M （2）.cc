#include <bits/stdc++.h>
using namespace std;

int n, m;
// int a[9];
bool visited[9];

void go_backtracking(int idx, int lvl) {
	// 기저조건
	if (lvl == m) {
		// print
		for (int i = 0; i < 9; i++) {
			if (visited[i]) {
				cout << i + 1 << ' ';
			}
		}
		cout << '\n';
	}
	// recursive
	for (int i = idx; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			go_backtracking(i, lvl + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	/*
	1. n, m 입력 받기
	2. 백트래킹 알고리즘 함수 실행 (재귀)
	*/
	cin >> n >> m;
	go_backtracking(0, 0);
	return 0;
}