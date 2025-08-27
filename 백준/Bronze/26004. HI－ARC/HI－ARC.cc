#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string S;
    cin >> N >> S;

    int cntH = 0, cntI = 0, cntA = 0, cntR = 0, cntC = 0;
    for (char ch : S) {
        if (ch == 'H') cntH++;
        else if (ch == 'I') cntI++;
        else if (ch == 'A') cntA++;
        else if (ch == 'R') cntR++;
        else if (ch == 'C') cntC++;
    }

    int ans = cntH;
    if (cntI < ans) ans = cntI;
    if (cntA < ans) ans = cntA;
    if (cntR < ans) ans = cntR;
    if (cntC < ans) ans = cntC;

    cout << ans << '\n';
    return 0;
}