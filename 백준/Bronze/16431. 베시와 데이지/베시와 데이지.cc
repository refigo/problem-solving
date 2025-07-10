#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Br, Bc;
    int Dr, Dc;
    int Jr, Jc;
    
    cin >> Br >> Bc;
    cin >> Dr >> Dc;
    cin >> Jr >> Jc;
    
    int bessie_time = max(abs(Jr - Br), abs(Jc - Bc));
    
    int daisy_time = abs(Jr - Dr) + abs(Jc - Dc);
    
    if (bessie_time < daisy_time) {
        cout << "bessie" << "\n";
    } else if (daisy_time < bessie_time) {
        cout << "daisy" << "\n";
    } else {
        cout << "tie" << "\n";
    }
    
    return 0;
}