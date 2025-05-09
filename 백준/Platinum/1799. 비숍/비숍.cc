#include <bits/stdc++.h>
using namespace std;

int n; // 체스판 크기
int board[10][10]; // 체스판 (1: 비숍 놓을 수 있음, 0: 비숍 놓을 수 없음)

// 대각선 번호를 저장할 배열 (왼쪽 상단 -> 오른쪽 하단 대각선, 오른쪽 상단 -> 왼쪽 하단 대각선)
int diag1[20]; // r+c 기준 (왼쪽 상단 -> 오른쪽 하단)
int diag2[20]; // r-c+n-1 기준 (오른쪽 상단 -> 왼쪽 하단)

// 각 색상별 칸의 좌표 저장
vector<pair<int, int>> white_cells;
vector<pair<int, int>> black_cells;

// 이분 매칭을 위한 변수들
vector<int> adj[101]; // 인접 리스트 (diag1 -> diag2 그래프)
int matched[101]; // 매칭된 정보
bool visited[101]; // DFS 방문 체크

// DFS를 이용한 이분 매칭
bool dfs(int from) {
    // 매칭 가능한 모든 상대 확인
    for (int to : adj[from]) {
        if (visited[to]) continue;
        visited[to] = true;
        
        // 아직 매칭되지 않았거나, 매칭된 정점을 다른 정점과 매칭 가능하면
        if (matched[to] == -1 || dfs(matched[to])) {
            matched[to] = from;
            return true;
        }
    }
    return false;
}

// 최대 이분 매칭을 구하는 함수
int bipartite_matching(vector<pair<int, int>>& cells) {
    // 그래프 초기화
    for (int i = 0; i < 101; i++) {
        adj[i].clear();
    }
    
    // 매칭 정보 초기화
    memset(matched, -1, sizeof(matched));
    
    // diag1과 diag2를 연결하는 간선 구성
    for (auto [r, c] : cells) {
        if (board[r][c] == 1) { // 비숍을 놓을 수 있는 칸만 고려
            // diag1, diag2 번호 계산
            int d1 = r + c;
            int d2 = r - c + n - 1;
            
            // 대각선 연결 (diag1 -> diag2)
            adj[d1].push_back(d2);
        }
    }
    
    int match_count = 0;
    
    // 각 diag1에 대해 매칭 시도
    for (int i = 0; i < 2*n-1; i++) {
        memset(visited, false, sizeof(visited));
        if (dfs(i)) match_count++;
    }
    
    return match_count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // 체스판 크기 입력
    cin >> n;
    
    // 체스판 정보 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
            
            // 각 색상별로 칸 분류 (체스판 특성상 (i+j)의 홀짝으로 색상 구분)
            if ((i + j) % 2 == 0) { // 흰색 칸
                white_cells.push_back({i, j});
            } else { // 검은색 칸
                black_cells.push_back({i, j});
            }
        }
    }
    
    // 흰색 칸과 검은색 칸에 대해 각각 최대 이분 매칭 계산
    int white_max = bipartite_matching(white_cells);
    int black_max = bipartite_matching(black_cells);
    
    // 두 색상의 최대 매칭 합이 답
    cout << (white_max + black_max) << '\n';
    
    return 0;
}