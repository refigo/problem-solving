#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if (s.size() >= 5 && s.compare(s.size() - 5, 5, "driip") == 0) cout << "cute\n";
    else cout << "not cute\n";
    return 0;
}