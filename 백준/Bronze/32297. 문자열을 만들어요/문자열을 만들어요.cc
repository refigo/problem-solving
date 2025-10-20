#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    string S;
    cin >> S;
    cout << (S.find("gori") != string::npos ? "YES" : "NO") << '\n';
    return 0;
}