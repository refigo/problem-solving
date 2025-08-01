#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    string sotteok;
    cin >> sotteok;
    
    int changes = 0;
    
    for (int i = 0; i < n/2; ++i) {
        if (sotteok[i] != sotteok[n-i-1]) {
            changes++;
        }
    }
    
    cout << changes << "\n";
    
    return 0;
}