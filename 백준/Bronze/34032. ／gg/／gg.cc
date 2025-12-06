#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    if(!(cin >> N)) return 0;
    string S; 
    cin >> S;
    int cnt = 0;
    for(char c : S) if (c == 'O') ++cnt;
    cout << (cnt * 2 >= N ? "Yes" : "No") << '\n';
    return 0;
}