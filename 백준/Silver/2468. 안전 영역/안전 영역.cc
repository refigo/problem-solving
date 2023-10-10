#include <bits/stdc++.h>
using namespace std;

int n;

const int n_max = 104;
int a[n_max][n_max];
int visited[n_max][n_max];

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int ans_area;

void init_visited() {
	// fill(visited, visited + n_max * n_max, 0);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			visited[i][j] = 0;
		}
	}
}

void dfs(int y, int x, int h) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || 
			nx < 0 || nx >= n)
			continue;
		if (a[ny][nx] <= h || visited[ny][nx])
			continue;
		dfs(ny, nx, h);
	}
	return ;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	ans_area = 1;
	for (int h = 1; h <= 100; h++){
		int cur_area = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (a[i][j] <= h || visited[i][j])
					continue;
				dfs(i, j, h);
				++cur_area;
			}
		}
		if (cur_area == 0)
			break;
		if (cur_area > ans_area)
			ans_area = cur_area;
		init_visited();
	}
	cout << ans_area << '\n';
	return 0;
}
