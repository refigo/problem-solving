#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, T;
    if(!(cin >> S)) return 0;
    cin >> T;
    bool ban[26] = {false};
    for (char c : S) ban[c - 'a'] = true;
    string out;
    out.reserve(T.size());
    for (char c : T) if (!ban[c - 'a']) out.push_back(c);
    cout << out << '\n';
    return 0;
}