#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string cur;
    if (!(cin >> cur)) return 0;
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        if (s >= cur) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}