#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    
    bool found = false;
    
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        
        if (name == "anj") {
            found = true;
        }
    }
    
    if (found) {
        cout << "뭐야;" << '\n';
    } else {
        cout << "뭐야?" << '\n';
    }
    
    return 0;
}