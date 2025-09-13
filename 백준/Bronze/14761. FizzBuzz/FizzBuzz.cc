#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y, N;
    if (!(cin >> X >> Y >> N)) return 0;
    for (int i = 1; i <= N; i++) {
        bool fx = (i % X == 0);
        bool fy = (i % Y == 0);
        if (fx && fy) cout << "FizzBuzz\n";
        else if (fx) cout << "Fizz\n";
        else if (fy) cout << "Buzz\n";
        else cout << i << '\n';
    }
    return 0;
}