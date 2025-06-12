#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> friends(N + 1);
    
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        
        friends[A].push_back(B);
        friends[B].push_back(A);
    }
    
    for (int i = 1; i <= N; i++) {
        cout << friends[i].size() << '\n';
    }
    
    return 0;
}
