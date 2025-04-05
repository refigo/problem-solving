#include <bits/stdc++.h>
using namespace std;

int N;
int board[20][20];
int answer = 0;

void copyBoard(int dest[20][20], int src[20][20]) {
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            dest[i][j] = src[i][j];
}

void moveUp(int b[20][20]) {
    bool merged[20][20] = {false};
    
    for(int j = 0; j < N; j++) {
        for(int i = 1; i < N; i++) {
            if(b[i][j] == 0) continue;
            
            int r = i;
            while(r > 0 && b[r-1][j] == 0) {
                b[r-1][j] = b[r][j];
                b[r][j] = 0;
                r--;
            }
            
            if(r > 0 && b[r-1][j] == b[r][j] && !merged[r-1][j]) {
                b[r-1][j] *= 2;
                b[r][j] = 0;
                merged[r-1][j] = true;
            }
        }
    }
}

void moveDown(int b[20][20]) {
    bool merged[20][20] = {false};
    
    for(int j = 0; j < N; j++) {
        for(int i = N-2; i >= 0; i--) {
            if(b[i][j] == 0) continue;
            
            int r = i;
            while(r < N-1 && b[r+1][j] == 0) {
                b[r+1][j] = b[r][j];
                b[r][j] = 0;
                r++;
            }
            
            if(r < N-1 && b[r+1][j] == b[r][j] && !merged[r+1][j]) {
                b[r+1][j] *= 2;
                b[r][j] = 0;
                merged[r+1][j] = true;
            }
        }
    }
}

void moveLeft(int b[20][20]) {
    bool merged[20][20] = {false};
    
    for(int i = 0; i < N; i++) {
        for(int j = 1; j < N; j++) {
            if(b[i][j] == 0) continue;
            
            int c = j;
            while(c > 0 && b[i][c-1] == 0) {
                b[i][c-1] = b[i][c];
                b[i][c] = 0;
                c--;
            }
            
            if(c > 0 && b[i][c-1] == b[i][c] && !merged[i][c-1]) {
                b[i][c-1] *= 2;
                b[i][c] = 0;
                merged[i][c-1] = true;
            }
        }
    }
}

void moveRight(int b[20][20]) {
    bool merged[20][20] = {false};
    
    for(int i = 0; i < N; i++) {
        for(int j = N-2; j >= 0; j--) {
            if(b[i][j] == 0) continue;
            
            int c = j;
            while(c < N-1 && b[i][c+1] == 0) {
                b[i][c+1] = b[i][c];
                b[i][c] = 0;
                c++;
            }
            
            if(c < N-1 && b[i][c+1] == b[i][c] && !merged[i][c+1]) {
                b[i][c+1] *= 2;
                b[i][c] = 0;
                merged[i][c+1] = true;
            }
        }
    }
}

int getMaxBlock(int b[20][20]) {
    int maxBlock = 0;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            maxBlock = max(maxBlock, b[i][j]);
    return maxBlock;
}

void solve(int depth, int b[20][20]) {
    if(depth == 5) {
        answer = max(answer, getMaxBlock(b));
        return;
    }
    
    int temp[20][20];
    
    copyBoard(temp, b);
    moveUp(temp);
    solve(depth + 1, temp);
    
    copyBoard(temp, b);
    moveDown(temp);
    solve(depth + 1, temp);
    
    copyBoard(temp, b);
    moveLeft(temp);
    solve(depth + 1, temp);
    
    copyBoard(temp, b);
    moveRight(temp);
    solve(depth + 1, temp);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    string expression;
    cin >> expression;
    
    vector<int> numbers;
    vector<char> ops;
    
    string num = "";
    for(char c : expression) {
        if(c >= '0' && c <= '9') {
            num += c;
        } else {
            numbers.push_back(stoi(num));
            num = "";
            ops.push_back(c);
        }
    }
    numbers.push_back(stoi(num));
    
    int result = numbers[0];
    bool minus_found = false;
    int temp = 0;
    
    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == '-') {
            if(!minus_found) {
                minus_found = true;
                temp = numbers[i + 1];
            } else {
                temp += numbers[i + 1];
            }
        } else {
            if(minus_found) {
                temp += numbers[i + 1];
            } else {
                result += numbers[i + 1];
            }
        }
    }
    
    if(minus_found) {
        result -= temp;
    }
    
    cout << result << '\n';
    
    return 0;
}