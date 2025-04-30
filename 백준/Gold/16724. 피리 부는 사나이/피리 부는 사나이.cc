#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<int>> visited;
vector<vector<int>> sccId;
int sccCount = 0;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dirToIdx(char dir) {
    if(dir == 'U') return 0;
    if(dir == 'D') return 1;
    if(dir == 'L') return 2;
    return 3; // 'R'
}

int dfs(int x, int y) {
    if(x < 0 || x >= n || y < 0 || y >= m) return -1;
    
    if(visited[x][y] == 2) return sccId[x][y];
    
    if(visited[x][y] == 1) {
        sccId[x][y] = sccCount++;
        visited[x][y] = 2;
        return sccId[x][y];
    }
    
    visited[x][y] = 1;
    
    int dir = dirToIdx(grid[x][y]);
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    
    int result = dfs(nx, ny);
    
    if(result != -1) {
        sccId[x][y] = result;
        visited[x][y] = 2;
        return result;
    }
    
    sccId[x][y] = sccCount++;
    visited[x][y] = 2;
    return sccId[x][y];
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    
    visited.resize(n, vector<int>(m, 0));
    sccId.resize(n, vector<int>(m, -1));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0) {
                dfs(i, j);
            }
        }
    }
    
    set<int> uniqueSCCs;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            uniqueSCCs.insert(sccId[i][j]);
        }
    }
    
    cout << uniqueSCCs.size() << '\n';
    
    return 0;
}