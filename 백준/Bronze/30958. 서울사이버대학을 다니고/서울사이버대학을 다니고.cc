#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cin.ignore();

    string s;
    getline(cin, s);

    int cnt[26] = {0};
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') cnt[ch - 'a']++;
    }

    int best = 0;
    for (int i = 0; i < 26; i++) if (cnt[i] > best) best = cnt[i];

    cout << best << '\n';
    return 0;
}