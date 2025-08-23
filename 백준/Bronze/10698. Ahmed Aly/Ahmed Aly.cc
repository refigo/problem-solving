#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        int X, Y, Z;
        char O, equals;
        
        cin >> X >> O >> Y >> equals >> Z;
        
        bool isCorrect = false;
        if (O == '+') {
            isCorrect = (X + Y == Z);
        } else if (O == '-') {
            isCorrect = (X - Y == Z);
        }
        
        cout << "Case " << t << ": " << (isCorrect ? "YES" : "NO") << "\n";
    }
    
    return 0;
}