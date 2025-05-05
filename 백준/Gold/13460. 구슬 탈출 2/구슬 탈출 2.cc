#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> board;
int dx[4] = {-1, 1, 0, 0}; // 상, 하, 좌, 우
int dy[4] = {0, 0, -1, 1};

// 구슬의 위치와 이동 횟수를 저장하는 구조체
struct State {
    int rx, ry; // 빨간 구슬 위치
    int bx, by; // 파란 구슬 위치
    int count;  // 이동 횟수
};

// 구슬을 특정 방향으로 기울일 때 이동 결과 계산
pair<int, int> move(int x, int y, int dir, int& distance) {
    int nx = x, ny = y;
    distance = 0;
    
    // 벽을 만나거나 구멍에 빠질 때까지 이동
    while (board[nx + dx[dir]][ny + dy[dir]] != '#' && board[nx][ny] != 'O') {
        nx += dx[dir];
        ny += dy[dir];
        distance++;
    }
    
    return {nx, ny};
}

int bfs() {
    // 빨간 구슬과 파란 구슬의 초기 위치 찾기
    int rx = -1, ry = -1, bx = -1, by = -1;
    int holeX = -1, holeY = -1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'R') {
                rx = i; ry = j;
                board[i][j] = '.'; // 구슬 위치를 빈 칸으로 표시
            }
            if (board[i][j] == 'B') {
                bx = i; by = j;
                board[i][j] = '.'; // 구슬 위치를 빈 칸으로 표시
            }
            if (board[i][j] == 'O') {
                holeX = i; holeY = j;
            }
        }
    }
    
    // BFS 시작
    queue<State> q;
    q.push({rx, ry, bx, by, 0});
    
    // 방문 상태 체크를 위한 맵
    map<tuple<int, int, int, int>, bool> visited;
    visited[{rx, ry, bx, by}] = true;
    
    while (!q.empty()) {
        State cur = q.front();
        q.pop();
        
        // 현재 횟수가 10번을 초과하면 중단
        if (cur.count >= 10) {
            continue;
        }
        
        // 현재 위치에서 구슬을 4방향으로 기울이기
        for (int dir = 0; dir < 4; dir++) {
            int redDist = 0, blueDist = 0;
            
            // 빨간 구슬과 파란 구슬 이동
            auto [nrx, nry] = move(cur.rx, cur.ry, dir, redDist);
            auto [nbx, nby] = move(cur.bx, cur.by, dir, blueDist);
            
            // 파란 구슬이 구멍에 빠진 경우 (실패 케이스) - 다음 방향 시도
            if (board[nbx][nby] == 'O') {
                continue;
            }
            
            // 빨간 구슬이 구멍에 빠진 경우 (성공)
            if (board[nrx][nry] == 'O') {
                return cur.count + 1;
            }
            
            // 두 구슬이 같은 위치에 있는 경우, 이동 거리가 더 긴 구슬을 한 칸 뒤로 조정
            if (nrx == nbx && nry == nby) {
                if (redDist > blueDist) {
                    nrx -= dx[dir];
                    nry -= dy[dir];
                } else {
                    nbx -= dx[dir];
                    nby -= dy[dir];
                }
            }
            
            // 새로운 상태가 아직 방문하지 않았다면 큐에 추가
            if (!visited[{nrx, nry, nbx, nby}]) {
                visited[{nrx, nry, nbx, nby}] = true;
                q.push({nrx, nry, nbx, nby, cur.count + 1});
            }
        }
    }
    
    return -1; // 10번 이하로 빨간 구슬을 구멍에 넣을 수 없는 경우
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