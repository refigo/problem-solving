#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    long long operations = n * n * n;
    
    cout << operations << '\n';
    cout << "3" << '\n';
    
    return 0;
}