#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    string s;
    cin >> s;
    int cu = 0, co = 0, cs = 0, cp = 0, cc = 0;
    for (char ch : s) {
        if (ch == 'u') cu++;
        else if (ch == 'o') co++;
        else if (ch == 's') cs++;
        else if (ch == 'p') cp++;
        else if (ch == 'c') cc++;
    }
    int ans = cu;
    if (co < ans) ans = co;
    if (cs < ans) ans = cs;
    if (cp < ans) ans = cp;
    if (cc < ans) ans = cc;
    cout << ans << '\n';
    return 0;
}