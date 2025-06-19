#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K;
    cin >> K;
    
    for (int dataSet = 1; dataSet <= K; dataSet++) {
        int heads;
        string actions;
        
        cin >> heads;
        cin >> actions;
        
        for (char action : actions) {
            if (action == 'c') {
                heads += 1;
            } else if (action == 'b') {
                heads -= 1;
            }
            
            if (heads <= 0) {
                heads = 0;
                break;
            }
        }
        
        cout << "Data Set " << dataSet << ":" << endl;
        cout << heads << endl;
        
        if (dataSet < K) {
            cout << endl;
        }
    }
    
    return 0;
}
