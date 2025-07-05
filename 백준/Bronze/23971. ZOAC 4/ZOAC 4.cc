#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int H, W, N, M;
    cin >> H >> W >> N >> M;
    
    int rowsUsed = (H + N) / (N + 1);
    int colsUsed = (W + M) / (M + 1);
    
    long long maxPeople = (long long)rowsUsed * colsUsed;
    
    cout << maxPeople << '\n';
    
    return 0;
}