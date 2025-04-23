#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    int R, C, T;
    cin >> R >> C >> T;
    
    vector<vector<int>> room(R, vector<int>(C));
    vector<int> cleaner;
    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> room[i][j];
            if(room[i][j] == -1) {
                cleaner.push_back(i);
            }
        }
    }
    
    for(int t = 0; t < T; t++) {
        vector<vector<int>> temp = room;
        
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                if(room[i][j] > 0) {
                    int spread_amount = room[i][j] / 5;
                    int spread_count = 0;
                    
                    for(int dir = 0; dir < 4; dir++) {
                        int nx = i + dx[dir];
                        int ny = j + dy[dir];
                        
                        if(nx >= 0 && nx < R && ny >= 0 && ny < C && room[nx][ny] != -1) {
                            temp[nx][ny] += spread_amount;
                            spread_count++;
                        }
                    }
                    
                    temp[i][j] -= spread_amount * spread_count;
                }
            }
        }
        
        room = temp;
        
        int upper = cleaner[0];
        int lower = cleaner[1];
        
        for(int i = upper - 1; i > 0; i--) {
            room[i][0] = room[i-1][0];
        }
        for(int j = 0; j < C - 1; j++) {
            room[0][j] = room[0][j+1];
        }
        for(int i = 0; i < upper; i++) {
            room[i][C-1] = room[i+1][C-1];
        }
        for(int j = C - 1; j > 1; j--) {
            room[upper][j] = room[upper][j-1];
        }
        room[upper][1] = 0;
        
        for(int i = lower + 1; i < R - 1; i++) {
            room[i][0] = room[i+1][0];
        }
        for(int j = 0; j < C - 1; j++) {
            room[R-1][j] = room[R-1][j+1];
        }
        for(int i = R - 1; i > lower; i--) {
            room[i][C-1] = room[i-1][C-1];
        }
        for(int j = C - 1; j > 1; j--) {
            room[lower][j] = room[lower][j-1];
        }
        room[lower][1] = 0;
    }
    
    int total = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(room[i][j] > 0) {
                total += room[i][j];
            }
        }
    }
    
    cout << total << '\n';
    
    return 0;
}