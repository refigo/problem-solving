#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5 * N; j++) {
            cout << "@";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 4 * N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "@";
        }
        cout << endl;
    }
    
    return 0;
}
