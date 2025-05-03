#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> grid;
vector<vector<int>> group;
vector<int> groupSize;
vector<vector<int>> result;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int startX, int startY, int groupId) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    group[startX][startY] = groupId;
    int size = 1;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && 
                grid[nx][ny] == 0 && group[nx][ny] == 0) {
                group[nx][ny] = groupId;
                q.push({nx, ny});
                size++;
            }
        }
    }
    
    groupSize[groupId] = size;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    
    grid.resize(n, vector<int>(m));
    group.resize(n, vector<int>(m, 0));
    result.resize(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++) {
            grid[i][j] = line[j] - '0';
            result[i][j] = grid[i][j];
        }
    }
    
    int groupId = 1;
    groupSize.resize(n * m + 1, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 0 && group[i][j] == 0) {
                bfs(i, j, groupId++);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                set<int> connectedGroups;
                
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && group[nx][ny] > 0) {
                        connectedGroups.insert(group[nx][ny]);
                    }
                }
                
                int totalSize = 1;
                for (int groupId : connectedGroups) {
                    totalSize += groupSize[groupId];
                }
                
                result[i][j] = totalSize % 10;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j];
        }
        cout << '\n';
    }
    
    return 0;
}