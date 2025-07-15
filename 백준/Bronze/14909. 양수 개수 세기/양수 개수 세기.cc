#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    int positiveCount = 0;
    
    while (cin >> num) {
        if (num > 0) {
            positiveCount++;
        }
    }
    
    cout << positiveCount << "\n";
    
    return 0;
}