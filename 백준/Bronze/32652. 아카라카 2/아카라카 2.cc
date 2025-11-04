#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int K;
    if (!(cin >> K)) return 0;
    string s = "AKARAKA";
    for (int i = 1; i < K; i++) s += "RAKA";
    cout << s << '\n';
    return 0;
}