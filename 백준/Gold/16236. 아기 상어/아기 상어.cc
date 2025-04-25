#include <bits/stdc++.h>
using namespace std;

int N;
int space[20][20];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

struct Shark {
    int x, y;
    int size;
    int eat_count;
};

pair<int, pair<int, int>> find_fish(Shark shark) {
    vector<vector<int>> dist(N, vector<int>(N, -1));
    queue<pair<int, int>> q;
    
    q.push({shark.x, shark.y});
    dist[shark.x][shark.y] = 0;
    
    int min_dist = INT_MAX;
    int min_x = -1, min_y = -1;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(dist[x][y] > min_dist) continue;
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || nx >= N || ny < 0 || ny >= N || dist[nx][ny] != -1 || space[nx][ny] > shark.size) 
                continue;
            
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
            
            if(space[nx][ny] > 0 && space[nx][ny] < shark.size) {
                if(min_dist > dist[nx][ny] || 
                  (min_dist == dist[nx][ny] && (min_x > nx || (min_x == nx && min_y > ny)))) {
                    min_dist = dist[nx][ny];
                    min_x = nx;
                    min_y = ny;
                }
            }
        }
    }
    
    if(min_x != -1) {
        return {min_dist, {min_x, min_y}};
    }
    
    return {-1, {-1, -1}};
}

int simulate() {
    Shark shark;
    shark.size = 2;
    shark.eat_count = 0;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(space[i][j] == 9) {
                shark.x = i;
                shark.y = j;
                space[i][j] = 0;
            }
        }
    }
    
    int time = 0;
    
    while(true) {
        auto [dist, pos] = find_fish(shark);
        auto [fish_x, fish_y] = pos;
        
        if(dist == -1) break;
        
        shark.x = fish_x;
        shark.y = fish_y;
        shark.eat_count++;
        space[fish_x][fish_y] = 0;
        
        if(shark.eat_count == shark.size) {
            shark.size++;
            shark.eat_count = 0;
        }
        
        time += dist;
    }
    
    return time;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> space[i][j];
        }
    }
    
    cout << simulate() << '\n';
    
    return 0;
}