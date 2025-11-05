#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int K;
    if (!(cin >> K)) return 0;

    vector<string> base = {"G...", ".I.T", "..S."};
    for (const string &row : base) {
        for (int vr = 0; vr < K; vr++) {
            for (char ch : row) {
                for (int hc = 0; hc < K; hc++) cout << ch;
            }
            cout << '\n';
        }
    }
    return 0;
}