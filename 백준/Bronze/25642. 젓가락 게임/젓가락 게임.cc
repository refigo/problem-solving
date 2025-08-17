#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    bool yongtaeTurn = true;
    
    while (true) {
        if (yongtaeTurn) {
            b += a;
            if (b >= 5) {
                cout << "yt" << "\n";
                break;
            }
        } else {
            a += b;
            if (a >= 5) {
                cout << "yj" << "\n";
                break;
            }
        }
        yongtaeTurn = !yongtaeTurn;
    }
    
    return 0;
}