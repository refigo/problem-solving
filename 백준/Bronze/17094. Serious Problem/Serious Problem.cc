#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int count_2 = 0;
    int count_e = 0;
    
    for (char c : s) {
        if (c == '2') {
            count_2++;
        } else if (c == 'e') {
            count_e++;
        }
    }
    
    if (count_2 > count_e) {
        cout << "2" << '\n';
    } else if (count_e > count_2) {
        cout << "e" << '\n';
    } else {
        cout << "yee" << '\n';
    }
    
    return 0;
}