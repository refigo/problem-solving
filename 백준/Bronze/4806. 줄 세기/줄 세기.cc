#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string line;
    int lineCount = 0;
    
    while (getline(cin, line)) {
        lineCount++;
    }
    
    cout << lineCount << '\n';
    
    return 0;
}