#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    int totalCount = 0;
    int currentBills = N;
    
    while (currentBills > 0) {
        totalCount += currentBills;
        
        currentBills = currentBills / M;
    }
    
    cout << totalCount << '\n';
    
    return 0;
}
