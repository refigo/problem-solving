#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int A, B, C;
    cin >> A >> B >> C;
    
    int N;
    cin >> N;
    
    int max_score = 0;
    
    for (int i = 0; i < N; i++) {
        int club_score = 0;
        
        for (int j = 0; j < 3; j++) {
            int a, b, c;
            cin >> a >> b >> c;
            
            int member_score = (A * a) + (B * b) + (C * c);
            club_score += member_score;
        }
        
        max_score = max(max_score, club_score);
    }
    
    cout << max_score << '\n';
    
    return 0;
}