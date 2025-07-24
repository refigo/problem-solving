#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string memo;
    
    cin >> n;
    cin >> memo;
    
    int bigdata_count = 0;
    int security_count = 0;
    
    for (size_t i = 0; i < memo.length(); ) {
        if (i + 7 <= memo.length() && memo.substr(i, 7) == "bigdata") {
            bigdata_count++;
            i += 7;
        } else if (i + 8 <= memo.length() && memo.substr(i, 8) == "security") {
            security_count++;
            i += 8;
        } else {
            i++;
        }
    }
    
    if (bigdata_count > security_count) {
        cout << "bigdata?";
    } else if (security_count > bigdata_count) {
        cout << "security!";
    } else {
        cout << "bigdata? security!";
    }
    
    return 0;
}