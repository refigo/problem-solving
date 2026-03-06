#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        long long smallest = 2;
        while (n % smallest == 0) {
            smallest++;
        }
        
        cout << smallest << " " << n - 1 << "\n";
    }

    return 0;
}
