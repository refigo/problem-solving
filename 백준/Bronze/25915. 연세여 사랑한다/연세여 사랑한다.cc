#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    char start;
    cin >> start;
    
    string password = "ILOVEYONSEI";
    int total_distance = 0;
    
    int current_position = start - 'A';
    
    for (char c : password) {
        int target_position = c - 'A';
        total_distance += abs(target_position - current_position);
        current_position = target_position;
    }
    
    cout << total_distance << "\n";
    
    return 0;
}