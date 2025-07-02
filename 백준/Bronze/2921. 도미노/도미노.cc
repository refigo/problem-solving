#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    long long total_dots = 0;
    
    for (int i = 0; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            total_dots += (i + j);
        }
    }
    
    cout << total_dots << '\n';
    
    return 0;
}