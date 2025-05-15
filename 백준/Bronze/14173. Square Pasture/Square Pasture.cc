#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;
    
    int min_x = min(x1, x3);
    int min_y = min(y1, y3);
    int max_x = max(x2, x4);
    int max_y = max(y2, y4);
    
    int length_x = max_x - min_x;
    int length_y = max_y - min_y;
    
    int side_length = max(length_x, length_y);
    
    int area = side_length * side_length;
    
    cout << area << endl;
    
    return 0;
}