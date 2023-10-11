#include <bits/stdc++.h>
using namespace std;

int N;
const int n_max = 68;
int a[n_max][n_max];
int visited[n_max][n_max];

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

string ret_str;

void init_visited(int y, int x, int n) {
	for (int i = y; i < y + n; i++){
		for (int j = x; j < x + n; j++){
			visited[i][j] = 0;
		}
	}
}

int dfs(int y1, int x1, int y2, int x2, int size, int target) {
	int cnt = 0;
	visited[y1][x1] = 1;
	if (a[y1][x1] == target)
		++cnt;
	for (int i = 0; i < 4; i++){
		int ny = y1 + dy[i];
		int nx = x1 + dx[i];
		if (ny < y2 - size + 1 || ny > y2 ||
			nx < x2 - size + 1 || nx > x2)
			continue;
		if (visited[ny][nx])
			continue;
		cnt += dfs(ny, nx, y2, x2, size, target);
	}
	return cnt;
}

void quad_tree(int y1, int x1, int n) {
	if (n == 1 || 
		dfs(y1, x1, y1 + n - 1, x1 + n - 1, n, a[y1][x1]) == n * n) {
		ret_str += '0' + a[y1][x1];
	} else {
		init_visited(y1, x1, n);
		int n_half = n / 2;
		ret_str += '(';
		quad_tree(y1, x1, n_half);
		quad_tree(y1, x1 + n_half, n_half);
		quad_tree(y1 + n_half, x1, n_half);
		quad_tree(y1 + n_half, x1 + n_half, n_half);
		ret_str += ')';
	}
	return ;
}

int main() {
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%1d", &a[i][j]);
		}
	}
	quad_tree(0, 0, N);
	printf("%s\n", ret_str.c_str());
	return 0;
}
