#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int SA, SB;
    cin >> SA >> SB;
    
    int C_score = SA ^ SB;
    
    cout << C_score << '\n';
    
    return 0;
}