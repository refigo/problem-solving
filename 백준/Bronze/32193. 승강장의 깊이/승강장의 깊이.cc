#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if(!(cin >> N)) return 0;
    long long depth = 0;
    for (int i = 1; i <= N; ++i) {
        long long A, B;
        cin >> A >> B;
        depth += (A - B);
        cout << depth << '\n';
    }
    return 0;
}