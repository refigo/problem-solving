#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int p1, p2, p3, p4, p5, p6, p7;
        cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7;
        
        // 100미터 허들 (트랙)
        int score1 = floor(9.23076 * pow(26.7 - p1, 1.835));
        
        // 높이뛰기 (필드)
        int score2 = floor(1.84523 * pow(p2 - 75, 1.348));
        
        // 포환던지기 (필드)
        int score3 = floor(56.0211 * pow(p3 - 1.5, 1.05));
        
        // 200미터 달리기 (트랙)
        int score4 = floor(4.99087 * pow(42.5 - p4, 1.81));
        
        // 멀리뛰기 (필드)
        int score5 = floor(0.188807 * pow(p5 - 210, 1.41));
        
        // 창던지기 (필드)
        int score6 = floor(15.9803 * pow(p6 - 3.8, 1.04));
        
        // 800미터 달리기 (트랙)
        int score7 = floor(0.11193 * pow(254 - p7, 1.88));
        
        int total = score1 + score2 + score3 + score4 + score5 + score6 + score7;
        cout << total << "\n";
    }
    
    return 0;
}