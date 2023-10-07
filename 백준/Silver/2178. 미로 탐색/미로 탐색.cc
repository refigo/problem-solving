#include "bits/stdc++.h"
using namespace std;

const int N_MAX = 104;
int a[N_MAX][N_MAX];
int visited[N_MAX][N_MAX];

int n, m;
string line;

int x, y;
int nx, ny;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int ans;

int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> line;
		for (int j = 0; j < m; j++){
			a[i][j] = line[j] - 48;
		}
	}

	queue<pair<int, int>> q;
	q.push({0, 0});
	visited[0][0] = 1;
	while (q.size()){
		tie(y, x) = q.front();
		q.pop();
		if (y == n - 1 && x == m - 1) {
			ans = visited[y][x];
			break ;
		}
		for (int i = 0; i < 4; i++) {
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m || \
				a[ny][nx] == 0 || visited[ny][nx])
				continue ;
			q.push({ny, nx});
			visited[ny][nx] = visited[y][x] + 1;
		}
	}
	cout << ans << '\n';	
	return 0;
}