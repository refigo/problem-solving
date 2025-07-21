#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    unsigned int M;
    cin >> N >> M;
    
    unsigned long long result = 1;
    
    for (int i = 0; i < N; i++) {
        unsigned int num;
        cin >> num;
        
        result = (result * (num % M)) % M;
    }
    
    cout << result << "\n";
    
    return 0;
}