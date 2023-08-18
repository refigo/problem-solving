#include "bits/stdc++.h"
using namespace std;
string word;
int len;
int ans = 1;
int main(){
    cin >> word;
    len = word.length();
    for (int i = 0; i < (len + 1) / 2; ++i) {
        if (word[i] != word[len - 1 - i]) {
            ans = 0;
            break ;
        }
    }
    cout << ans << '\n';
    return 0;
}
