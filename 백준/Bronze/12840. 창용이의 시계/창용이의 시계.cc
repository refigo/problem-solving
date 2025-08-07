#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, m, s;
    cin >> h >> m >> s;
    
    int totalSeconds = h * 3600 + m * 60 + s;
    
    int q;
    cin >> q;
    
    while (q--) {
        int t, c;
        cin >> t;
        
        if (t == 1) {
            cin >> c;
            totalSeconds = (totalSeconds + c) % 86400; // 24*60*60 = 86400 seconds in a day
        } else if (t == 2) {
            cin >> c;
            totalSeconds = (totalSeconds - c % 86400 + 86400) % 86400; // Add 86400 to handle negative values
        } else if (t == 3) {
            int currHour = totalSeconds / 3600;
            int currMin = (totalSeconds % 3600) / 60;
            int currSec = totalSeconds % 60;
            
            cout << currHour << " " << currMin << " " << currSec << "\n";
        }
    }
    
    return 0;
}