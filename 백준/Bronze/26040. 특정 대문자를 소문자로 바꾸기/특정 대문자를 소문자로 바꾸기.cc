#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string A;
    string B;
    getline(cin, A);
    getline(cin, B);

    bool mark[26] = {false};
    {
        istringstream iss(B);
        string tok;
        while (iss >> tok) {
            if (!tok.empty()) {
                char c = tok[0];
                if (c >= 'A' && c <= 'Z') mark[c - 'A'] = true;
            }
        }
    }

    for (char &ch : A) {
        if (ch >= 'A' && ch <= 'Z' && mark[ch - 'A']) ch = char(ch - 'A' + 'a');
    }

    cout << A << '\n';
    return 0;
}