#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string input;
    getline(cin, input);
    
    bool found = false;
    
    for (int i = 0; i < input.length() - 1; i++) {
        if ((input[i] == 'D' || input[i] == 'd') && input[i+1] == '2') {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "D2" << '\n';
    } else {
        cout << "unrated" << '\n';
    }
    
    return 0;
}