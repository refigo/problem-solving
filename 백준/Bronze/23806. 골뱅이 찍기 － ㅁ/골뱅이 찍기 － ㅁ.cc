#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    int size = 5 * N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < size; j++) {
            cout << "@";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < 3 * N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "@";
        }
        
        for (int j = 0; j < 3 * N; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < N; j++) {
            cout << "@";
        }
        cout << "\n";
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < size; j++) {
            cout << "@";
        }
        cout << "\n";
    }
    
    return 0;
}
