#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    if (N % 2 == 1) cout << "Either\n";
    else if (N % 4 == 0) cout << "Even\n";
    else cout << "Odd\n";
    return 0;
}