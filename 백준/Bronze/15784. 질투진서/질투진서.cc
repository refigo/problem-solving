#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, a, b;
    cin >> N >> a >> b;
    
    int grid[1001][1001];
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> grid[i][j];
        }
    }
    
    int jinseoCharm = grid[a][b];
    bool isAngry = false;
    
    for (int j = 1; j <= N; j++) {
        if (grid[a][j] > jinseoCharm) {
            isAngry = true;
            break;
        }
    }
    
    if (!isAngry) {
        for (int i = 1; i <= N; i++) {
            if (grid[i][b] > jinseoCharm) {
                isAngry = true;
                break;
            }
        }
    }
    
    cout << (isAngry ? "ANGRY" : "HAPPY") << '\n';
    
    return 0;
}
