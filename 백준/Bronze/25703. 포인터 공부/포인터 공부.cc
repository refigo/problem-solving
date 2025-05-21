#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    
    cout << "int a;" << '\n';
    
    cout << "int *ptr = &a;" << '\n';
    
    for (int i = 2; i <= N; i++) {
        cout << "int ";
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        cout << "ptr" << i << " = &ptr";
        
        if (i > 2) {
            cout << (i - 1);
        }
        
        cout << ";" << '\n';
    }
    
    return 0;
}