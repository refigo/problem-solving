#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    string skewer;
    cin >> skewer;
    
    int bestLength = 0;
    int bestStart = 0;
    
    for (int start = 0; start < n; start++) {
        int sCount = 0;
        int tCount = 0;
        
        for (int i = start; i < n; i++) {
            if (skewer[i] == 's') sCount++;
            else tCount++;
        }
        
        if (sCount != tCount) continue;
        
        int length = n - start;
        if (length > bestLength) {
            bestLength = length;
            bestStart = start;
        }
        
        break;
    }
    
    for (int i = bestStart; i < n; i++) {
        cout << skewer[i];
    }
    cout << "\n";
    
    return 0;
}