#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if(!(cin >> T)) return 0;
    long long score = 0;
    int prevL = 0, prevR = 0;
    for(int t = 1; t <= T; ++t){
        int l, r;
        cin >> l >> r;
        if (l != 0 && r != 0 && l == r) ++score;
        if (t >= 2){
            if (l != 0 && prevL != 0 && l == prevL) ++score;
            if (r != 0 && prevR != 0 && r == prevR) ++score;
        }
        prevL = l;
        prevR = r;
    }
    cout << score << '\n';
    return 0;
}