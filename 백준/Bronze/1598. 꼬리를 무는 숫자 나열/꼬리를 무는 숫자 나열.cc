#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    int a_col = (a - 1) / 4;
    int a_row = (a - 1) % 4;
    
    int b_col = (b - 1) / 4;
    int b_row = (b - 1) % 4;
    
    int distance = abs(b_col - a_col) + abs(b_row - a_row);
    
    cout << distance << '\n';
    
    return 0;
}