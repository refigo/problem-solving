#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, p;
    
    while (cin >> h >> p) {
        double avg = static_cast<double>(h) / p;
        cout << fixed << setprecision(2) << avg << "\n";
    }
    
    return 0;
}