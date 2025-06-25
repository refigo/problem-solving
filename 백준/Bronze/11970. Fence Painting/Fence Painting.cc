#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    
    int johnLength = b - a;
    int bessieLength = d - c;
    
    int overlap = max(0, min(b, d) - max(a, c));
    int totalPainted = johnLength + bessieLength - overlap;
    
    cout << totalPainted << '\n';
    
    return 0;
}
