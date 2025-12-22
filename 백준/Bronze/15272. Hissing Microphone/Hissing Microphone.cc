#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if(!(cin >> s)) return 0;
    cout << (s.find("ss") != string::npos ? "hiss" : "no hiss") << '\n';
    return 0;
}