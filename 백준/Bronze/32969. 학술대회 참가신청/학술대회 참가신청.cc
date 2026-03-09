#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (getline(cin, s)) {
        string lower_s = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') lower_s += (char)(c - 'A' + 'a');
            else lower_s += c;
        }

        string t1[] = {"social", "history", "language", "literacy"};
        string t2[] = {"bigdata", "public", "society"};

        for (int i = 0; i < 4; ++i) {
            if (lower_s.find(t1[i]) != string::npos) {
                cout << "digital humanities\n";
                return 0;
            }
        }
        
        for (int i = 0; i < 3; ++i) {
            if (lower_s.find(t2[i]) != string::npos) {
                cout << "public bigdata\n";
                return 0;
            }
        }
    }

    return 0;
}
