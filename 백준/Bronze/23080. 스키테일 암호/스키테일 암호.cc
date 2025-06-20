#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K;
    string S;
    
    cin >> K;
    cin >> S;
    
    int len = S.length();
    int cols = (len + K - 1) / K;
    
    string result = "";
    
    for (int i = 0; i < cols; i++) {
        result += S[i * K];
    }
    
    cout << result << endl;
    
    return 0;
}
