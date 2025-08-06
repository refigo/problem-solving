#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int money = 5000;
    int button;
    
    while (cin >> button) {
        if (button == 1) {
            money -= 500;
        } else if (button == 2) {
            money -= 800;
        } else if (button == 3) {
            money -= 1000;
        }
    }
    
    cout << money << "\n";
    
    return 0;
}