#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    
    while (cin >> n && n != -1) {
        int totalDistance = 0;
        int prevTime = 0;
        
        for (int i = 0; i < n; i++) {
            int speed, time;
            cin >> speed >> time;
            
            totalDistance += speed * (time - prevTime);
            prevTime = time;
        }
        
        cout << totalDistance << " miles" << "\n";
    }
    
    return 0;
}