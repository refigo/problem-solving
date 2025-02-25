#include <bits/stdc++.h>
using namespace std;

const int N = 9;
int board[N][N];

// 해당 위치(row, col)에 num을 놓을 수 있는지 검사
bool is_valid(int row, int col, int num) {
    // 같은 행에 있는지 검사
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num) return false;
    }
    
    // 같은 열에 있는지 검사
    for (int x = 0; x < N; x++) {
        if (board[x][col] == num) return false;
    }
    
    // 3x3 박스 안에 있는지 검사
    int start_row = row - row % 3;
    int start_col = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + start_row][j + start_col] == num) return false;
        }
    }
    
    return true;
}

// 스도쿠 풀기 (백트래킹)
bool solve_sudoku() {
    int row = -1, col = -1;
    bool is_empty = false;
    
    // 빈 칸 찾기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 0) {
                row = i;
                col = j;
                is_empty = true;
                break;
            }
        }
        if (is_empty) break;
    }
    
    // 모든 칸이 채워졌으면 완료
    if (!is_empty) return true;
    
    // 1부터 9까지 시도
    for (int num = 1; num <= N; num++) {
        if (is_valid(row, col, num)) {
            board[row][col] = num;
            if (solve_sudoku()) return true;
            board[row][col] = 0;  // 실패하면 되돌리기
        }
    }
    
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    // 스도쿠 보드 입력
    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < N; j++) {
            board[i][j] = line[j] - '0';
        }
    }
    
    solve_sudoku();
    
    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}