#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int approve = 0;
    int reject = 0;
    int abstain = 0;
    
    for (int i = 0; i < n; ++i) {
        int vote;
        cin >> vote;
        
        if (vote == 1) approve++;
        else if (vote == -1) reject++;
        else abstain++; // vote == 0
    }
    
    if (abstain >= (n + 1) / 2) {
        cout << "INVALID" << "\n";
    }
    else if (approve > reject) {
        cout << "APPROVED" << "\n";
    }
    else {
        cout << "REJECTED" << "\n";
    }
    
    return 0;
}