#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    string X, Y;
    for (int i = 0; i < N; i++) {
        string t; cin >> t; X += t;
    }
    for (int i = 0; i < N; i++) {
        string t; cin >> t; Y += t;
    }
    if (X.size() < Y.size()) cout << X << '\n';
    else if (X.size() > Y.size()) cout << Y << '\n';
    else cout << (X <= Y ? X : Y) << '\n';
    return 0;
}