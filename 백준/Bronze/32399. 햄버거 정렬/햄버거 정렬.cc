#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S; 
    if(!(cin >> S)) return 0;
    const string T = "(1)";
    if (S == T) { cout << 0 << '\n'; return 0; }

    for (int i = 0; i < 3; i++) {
        string rest = S.substr(0, i) + S.substr(i+1);
        string front = string(1, S[i]) + rest;
        string back = rest + string(1, S[i]);
        if (front == T || back == T) { cout << 1 << '\n'; return 0; }
    }
    cout << 2 << '\n';
    return 0;
}