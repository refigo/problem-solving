#include <bits/stdc++.h>
using namespace std;

int n;
int board[10][10];

int diag1[20];
int diag2[20];

vector<pair<int, int>> white_cells;
vector<pair<int, int>> black_cells;

vector<int> adj[101];
int matched[101];
bool visited[101];

bool dfs(int from) {
    for (int to : adj[from]) {
        if (visited[to]) continue;
        visited[to] = true;
        
        if (matched[to] == -1 || dfs(matched[to])) {
            matched[to] = from;
            return true;
        }
    }
    return false;
}

int bipartite_matching(vector<pair<int, int>>& cells) {
    for (int i = 0; i < 101; i++) {
        adj[i].clear();
    }
    
    memset(matched, -1, sizeof(matched));
    
    for (auto [r, c] : cells) {
        if (board[r][c] == 1) {
            int d1 = r + c;
            int d2 = r - c + n - 1;
            
            adj[d1].push_back(d2);
        }
    }
    
    int match_count = 0;
    
    for (int i = 0; i < 2*n-1; i++) {
        memset(visited, false, sizeof(visited));
        if (dfs(i)) match_count++;
    }
    
    return match_count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            
            if ((i + j) % 2 == 0) {
                white_cells.push_back({i, j});
            } else {
                black_cells.push_back({i, j});
            }
        }
    }
    
    int white_max = bipartite_matching(white_cells);
    int black_max = bipartite_matching(black_cells);
    
    cout << (white_max + black_max) << '\n';
    
    return 0;
}