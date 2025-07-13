#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int age;
    while (cin >> age && age != 0) {
        int leaves = 1;
        
        for (int year = 0; year < age; year++) {
            int splittingFactor, prunedBranches;
            cin >> splittingFactor >> prunedBranches;
            
            leaves = leaves * splittingFactor - prunedBranches;
        }
        
        cout << leaves << "\n";
    }
    
    return 0;
}