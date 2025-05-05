#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> board;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

struct State {
    int rx, ry;
    int bx, by;
    int count;
};

pair<int, int> move(int x, int y, int dir, int& distance) {
    int nx = x, ny = y;
    distance = 0;
    
    while (board[nx + dx[dir]][ny + dy[dir]] != '#' && board[nx][ny] != 'O') {
        nx += dx[dir];
        ny += dy[dir];
        distance++;
    }
    
    return {nx, ny};
}

int bfs() {
    int rx = -1, ry = -1, bx = -1, by = -1;
    int holeX = -1, holeY = -1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'R') {
                rx = i; ry = j;
                board[i][j] = '.';
            }
            if (board[i][j] == 'B') {
                bx = i; by = j;
                board[i][j] = '.';
            }
            if (board[i][j] == 'O') {
                holeX = i; holeY = j;
            }
        }
    }
    
    queue<State> q;
    q.push({rx, ry, bx, by, 0});
    
    map<tuple<int, int, int, int>, bool> visited;
    visited[{rx, ry, bx, by}] = true;
    
    while (!q.empty()) {
        State cur = q.front();
        q.pop();
        
        if (cur.count >= 10) {
            continue;
        }
        
        for (int dir = 0; dir < 4; dir++) {
            int redDist = 0, blueDist = 0;
            
            auto [nrx, nry] = move(cur.rx, cur.ry, dir, redDist);
            auto [nbx, nby] = move(cur.bx, cur.by, dir, blueDist);
            
            if (board[nbx][nby] == 'O') {
                continue;
            }
            
            if (board[nrx][nry] == 'O') {
                return cur.count + 1;
            }
            
            if (nrx == nbx && nry == nby) {
                if (redDist > blueDist) {
                    nrx -= dx[dir];
                    nry -= dy[dir];
                } else {
                    nbx -= dx[dir];
                    nby -= dy[dir];
                }
            }
            
            if (!visited[{nrx, nry, nbx, nby}]) {
                visited[{nrx, nry, nbx, nby}] = true;
                q.push({nrx, nry, nbx, nby, cur.count + 1});
            }
        }
    }
    
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    board.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    
    cout << bfs() << '\n';
    
    return 0;
}